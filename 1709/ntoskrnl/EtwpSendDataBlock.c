/*
 * XREFs of EtwpSendDataBlock @ 0x1404EF6A0
 * Callers:
 *     EtwpNotifyGuid @ 0x1404EDE90 (EtwpNotifyGuid.c)
 *     EtwpEnableGuid @ 0x1404EE2B8 (EtwpEnableGuid.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404EF2A8 (EtwpClearSessionAndUnreferenceEntry.c)
 *     EtwpDisallowedGuidAddition @ 0x140743A34 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x140743BBC (EtwpDisallowedGuidRemoval.c)
 *     SendCaptureStateNotificationsWorker @ 0x14074FA80 (SendCaptureStateNotificationsWorker.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 *     MmGetSessionById @ 0x140089C70 (MmGetSessionById.c)
 *     MmDetachSession @ 0x1400B4910 (MmDetachSession.c)
 *     MmAttachSession @ 0x1400B4990 (MmAttachSession.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     EtwpQueueNotification @ 0x1404EF84C (EtwpQueueNotification.c)
 */

__int64 __fastcall EtwpSendDataBlock(__int64 a1, __int64 a2, __int64 a3)
{
  __int16 v3; // ax
  __int64 *v4; // r10
  _KPROCESS *v5; // rsi
  unsigned int v6; // r14d
  __int64 v10; // rdx
  unsigned int v11; // r12d
  void (__fastcall *v12)(__int64, _QWORD, __int64, __int64, __int64, __int64 *, __int64); // r13
  __int64 v13; // r11
  __int64 v14; // rbx
  char v15; // r15
  unsigned int v16; // r9d
  unsigned int v17; // ecx
  _KPROCESS *SessionById; // rax
  __int64 v19; // rcx
  __int64 v20; // r9
  int *v21; // rdx
  int v22; // eax
  __int64 v23; // [rsp+40h] [rbp-39h]
  _QWORD v24[2]; // [rsp+48h] [rbp-31h] BYREF
  __int64 v25; // [rsp+58h] [rbp-21h] BYREF
  int v26; // [rsp+60h] [rbp-19h]
  int v27; // [rsp+64h] [rbp-15h]
  _BYTE v28[48]; // [rsp+68h] [rbp-11h] BYREF

  v3 = *(_WORD *)(a1 + 98);
  v4 = 0LL;
  v5 = 0LL;
  v24[0] = 0LL;
  v6 = 0;
  if ( (v3 & 1) == 0 )
  {
    if ( (v3 & 2) != 0 )
      return (unsigned int)EtwpQueueNotification(*(PVOID *)(a1 + 80));
    return v6;
  }
  v10 = *(_QWORD *)(a1 + 80);
  v23 = v10;
  if ( !*(_QWORD *)(a1 + 88) )
    return v6;
  if ( (v3 & 0x10) != 0 )
  {
    SessionById = (_KPROCESS *)MmGetSessionById(*(_DWORD *)(a1 + 56));
    v5 = SessionById;
    if ( !SessionById )
      return (unsigned int)-1073741275;
    v6 = MmAttachSession(SessionById, (__int64)v28);
    if ( (v6 & 0x80000000) != 0 )
      goto LABEL_15;
    v4 = (__int64 *)v24[0];
    v10 = v23;
  }
  if ( *(_DWORD *)a2 == 3 )
  {
    if ( (*(_BYTE *)(a1 + 98) & 8) != 0 )
    {
      v19 = *(_QWORD *)(a1 + 32);
      v20 = v10;
      LOBYTE(v10) = *(_BYTE *)(a2 + 112);
      LOWORD(v24[0]) = *(_WORD *)(v19 + 72);
      WORD1(v24[0]) = *(unsigned __int8 *)(v19 + 74);
      HIDWORD(v24[0]) = *(_DWORD *)(v19 + 64);
      v24[1] = *(unsigned int *)(v19 + 68);
      (*(void (__fastcall **)(__int64, __int64, _QWORD *, __int64))(a1 + 88))(v19 + 24, v10, v24, v20);
    }
    else
    {
      v11 = *(_DWORD *)(a2 + 72);
      v12 = *(void (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64, __int64 *, __int64))(a1 + 88);
      v13 = *(_QWORD *)(a2 + 88);
      v14 = *(_QWORD *)(a2 + 96);
      v15 = *(_BYTE *)(a2 + 76);
      if ( !v11 )
      {
        v13 = 0LL;
        v14 = 0LL;
        v15 = 0;
      }
      v16 = *(_DWORD *)(a2 + 116);
      v17 = 0;
      if ( v16 )
      {
        v21 = (int *)(a2 + 132);
        while ( 1 )
        {
          a3 = (unsigned int)*v21;
          if ( *v21 >= 0 || (_DWORD)a3 == 0x80000000 )
            break;
          ++v17;
          v21 += 4;
          if ( v17 >= v16 )
            goto LABEL_12;
        }
        v22 = *(_DWORD *)(a2 + 16LL * v17 + 128);
        v25 = a2 + *(_QWORD *)(a2 + 16LL * v17 + 120);
        v4 = &v25;
        v27 = *(_DWORD *)(a2 + 16LL * v17 + 132);
        v26 = v22;
      }
LABEL_12:
      LOBYTE(a3) = v15;
      v12(a2 + 56, v11, a3, v13, v14, v4, v23);
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v5 )
  {
    MmDetachSession((__int64)v5, (__int64)v28);
LABEL_15:
    ObfDereferenceObject(v5);
  }
  return v6;
}
