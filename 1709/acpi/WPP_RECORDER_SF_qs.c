/*
 * XREFs of WPP_RECORDER_SF_qs @ 0x1C0044DB8
 * Callers:
 *     ACPIBuildIssueNotifyInvalidateRelationsForDockDevice @ 0x1C00431A0 (ACPIBuildIssueNotifyInvalidateRelationsForDockDevice.c)
 *     OSNotifyDeviceCheck @ 0x1C0051F9C (OSNotifyDeviceCheck.c)
 *     OSNotifyDeviceEject @ 0x1C0052108 (OSNotifyDeviceEject.c)
 *     OSNotifyDeviceEnum @ 0x1C005218C (OSNotifyDeviceEnum.c)
 *     AcpiHandleInternalNotify @ 0x1C00544F0 (AcpiHandleInternalNotify.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C002C170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qs(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        const char *a7)
{
  __int64 v9; // rdi
  unsigned __int64 v11; // rsi
  const char *v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  const char *v16; // rcx
  __int64 v17; // rdi
  int v19; // [rsp+20h] [rbp-58h]
  __int64 v20; // [rsp+50h] [rbp-28h]
  __int64 v21; // [rsp+58h] [rbp-20h]
  __int64 v22; // [rsp+60h] [rbp-18h]
  __int64 v23; // [rsp+68h] [rbp-10h]

  v9 = -1LL;
  v11 = (unsigned __int64)a3 >> 16;
  v13 = a7;
  v14 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v11 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v14, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v11 + 1) >= a2 )
  {
    if ( a7 )
    {
      v15 = -1LL;
      do
        ++v15;
      while ( a7[v15] );
    }
    v16 = a7;
    if ( !a7 )
      v16 = "NULL";
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v11), 43LL, a5, a4, &a6, 8LL, v16);
  }
  if ( v13 )
  {
    do
      ++v9;
    while ( v13[v9] );
    v17 = v9 + 1;
  }
  else
  {
    v17 = 5LL;
  }
  if ( !v13 )
    v13 = "NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v19, &a6, 8LL, v13, v17, 0LL, v20, v21, v22, v23);
}
