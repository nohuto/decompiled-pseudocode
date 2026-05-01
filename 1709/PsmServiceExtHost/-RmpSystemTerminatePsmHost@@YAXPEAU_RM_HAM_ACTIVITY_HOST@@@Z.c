/*
 * XREFs of ?RmpSystemTerminatePsmHost@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180041678
 * Callers:
 *     ?HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001AB9C (-HampHostRundown@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 *     ?HampHostCheckTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18004346C (-HampHostCheckTerminate@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180013B38 (_TlgKeywordOn.c)
 *     _TlgCreateWsz @ 0x180015DB4 (_TlgCreateWsz.c)
 *     _TlgWrite @ 0x1800176F0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180025FE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180026AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RmpSystemTerminatePsmHost(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rdx
  LPCGUID v3; // r8
  LPCGUID v4; // r9
  __int64 v5; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+60h] [rbp-38h] BYREF
  __int64 *v8; // [rsp+70h] [rbp-28h]
  int v9; // [rsp+78h] [rbp-20h]
  int v10; // [rsp+7Ch] [rbp-1Ch]

  (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(*((_QWORD *)a1 - 3) + 56LL) + 192LL))(*((_QWORD *)a1 + 108));
  if ( hProvider > 4u )
  {
    if ( TlgKeywordOn((TraceLoggingHProvider)&hProvider, 9uLL) )
    {
      TlgCreateWsz(&pDesc, (LPCWSTR)a1 + 12);
      v2 = *((_QWORD *)a1 - 5);
      v10 = 0;
      v8 = &v5;
      v5 = v2;
      v9 = 8;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_18005AA27, v3, v4, 4u, &pData);
    }
  }
}
