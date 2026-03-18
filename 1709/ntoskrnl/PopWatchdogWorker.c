/*
 * XREFs of PopWatchdogWorker @ 0x14024A230
 * Callers:
 *     <none>
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     MmGetSessionById @ 0x140089C70 (MmGetSessionById.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x1400B1CA8 (PopUpdateWatchdogNoWorkersEvent.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     PopResolveWatchdogParam @ 0x14024A184 (PopResolveWatchdogParam.c)
 *     MmQuitNextSession @ 0x14059E950 (MmQuitNextSession.c)
 */

void __fastcall PopWatchdogWorker(__int64 a1)
{
  bool v2; // r14
  KIRQL v3; // bl
  int v4; // ecx
  _KPROCESS *SessionById; // rsi
  ULONG_PTR v6; // rbx
  ULONG_PTR v7; // r15
  ULONG_PTR v8; // r12
  ULONG_PTR BugCheckParameter4; // rax
  unsigned __int64 v10; // rbx
  __int128 v11; // [rsp+50h] [rbp-59h]
  __int128 v12; // [rsp+60h] [rbp-49h]
  __int128 v13; // [rsp+70h] [rbp-39h]
  __int64 v14; // [rsp+80h] [rbp-29h]
  __m128i v15; // [rsp+90h] [rbp-19h]
  _BYTE v16[48]; // [rsp+A0h] [rbp-9h] BYREF

  v2 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
  if ( *(_BYTE *)(a1 + 216) && MEMORY[0xFFFFF78000000008] >= *(_QWORD *)(a1 + 208) )
  {
    v15 = *(__m128i *)(a1 + 224);
    v12 = *(_OWORD *)(a1 + 256);
    v11 = *(_OWORD *)(a1 + 240);
    v14 = *(_QWORD *)(a1 + 288);
    v13 = *(_OWORD *)(a1 + 272);
    KxReleaseSpinLock(&PopWatchdogLock);
    __writecr8(v3);
    v4 = _mm_cvtsi128_si32(_mm_srli_si128(v15, 4));
    if ( v4 == -1 )
      SessionById = 0LL;
    else
      SessionById = (_KPROCESS *)MmGetSessionById(v4);
    if ( SessionById )
      v2 = (int)MmAttachSession(SessionById, (__int64)v16) >= 0;
    v6 = PopResolveWatchdogParam(v11, v13);
    v7 = PopResolveWatchdogParam(*((__int64 *)&v11 + 1), SBYTE1(v13));
    v8 = PopResolveWatchdogParam(v12, SBYTE2(v13));
    BugCheckParameter4 = PopResolveWatchdogParam(*((__int64 *)&v12 + 1), SBYTE3(v13));
    if ( !*((_QWORD *)&v13 + 1) )
      KeBugCheckEx(v15.m128i_u32[2], v6, v7, v8, BugCheckParameter4);
    (*((void (__fastcall **)(__int64, _QWORD, ULONG_PTR, ULONG_PTR, ULONG_PTR, ULONG_PTR))&v13 + 1))(
      v14,
      v15.m128i_u32[2],
      v6,
      v7,
      v8,
      BugCheckParameter4);
    v10 = KeAcquireSpinLockRaiseToDpc(&PopWatchdogLock);
    *(_BYTE *)(a1 + 21) = 0;
    PopUpdateWatchdogNoWorkersEvent(a1);
    KxReleaseSpinLock(&PopWatchdogLock);
    __writecr8(v10);
    if ( v2 )
    {
      MmDetachSession((__int64)SessionById, (__int64)v16);
      MmQuitNextSession(SessionById);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 21) = 0;
    PopUpdateWatchdogNoWorkersEvent(a1);
    KxReleaseSpinLock(&PopWatchdogLock);
    __writecr8(v3);
  }
}
