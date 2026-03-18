/*
 * XREFs of VidSchiUpdateCurrentIsrFrameTime @ 0x1C0014C5C
 * Callers:
 *     VidSchiProcessIsrCompletedPacket @ 0x1C000C470 (VidSchiProcessIsrCompletedPacket.c)
 *     VidSchiExecuteMmIoFlipAtISR @ 0x1C00125F0 (VidSchiExecuteMmIoFlipAtISR.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall VidSchiUpdateCurrentIsrFrameTime(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rbx
  BOOL v5; // esi
  __int64 result; // rax
  LARGE_INTEGER v9; // rcx
  signed __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // r10
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp-30h] BYREF
  LARGE_INTEGER v16; // [rsp+38h] [rbp-28h]
  __int64 v17; // [rsp+40h] [rbp-20h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h]
  __int64 v19; // [rsp+50h] [rbp-10h]

  v3 = 0LL;
  v16.QuadPart = 0LL;
  v5 = a3 != 0;
  if ( _InterlockedExchange((volatile __int32 *)(a2 + 23592), 0) )
  {
    v16 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( !*(_QWORD *)(a2 + 23584) )
      *(union _LARGE_INTEGER *)(a2 + 23584) = PerformanceFrequency;
    v10 = _InterlockedCompareExchange64((volatile signed __int64 *)(a2 + 23608), 0LL, 0LL);
    v9 = v16;
    v11 = v10;
    v12 = *(_QWORD *)(a2 + 23528);
    v13 = v16.QuadPart - v12;
    result = v5;
    if ( v11 )
    {
      if ( v13 > v11 )
      {
        result = v13 / v11;
        if ( !a3 )
        {
          if ( !(_DWORD)result )
            return result;
          v9.QuadPart = v12 + v11 * result;
        }
      }
    }
  }
  else
  {
    result = a3 != 0;
    if ( a3 )
    {
      v9 = KeQueryPerformanceCounter(&PerformanceFrequency);
      result = v5;
      if ( !*(_QWORD *)(a2 + 23584) )
      {
        *(union _LARGE_INTEGER *)(a2 + 23584) = PerformanceFrequency;
        result = v5;
      }
    }
    else
    {
      v9 = v16;
    }
  }
  if ( (_DWORD)result )
  {
    *(_QWORD *)(a2 + 23536) += (unsigned int)result;
    *(LARGE_INTEGER *)(a2 + 23528) = v9;
    if ( *(_BYTE *)(a2 + 8) )
    {
      if ( !*(_BYTE *)(a1 + 132) )
      {
        v14 = *(_QWORD *)(a1 + 8);
        v17 = 0LL;
        v18 = 0LL;
        v19 = 0LL;
        result = ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64 *))DxgCoreInterface[48])(v14, 0LL, 0LL, &v17);
        if ( (int)result >= 0 )
          v3 = v18;
        *(_QWORD *)(a2 + 23544) = v3;
      }
    }
  }
  return result;
}
