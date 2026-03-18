/*
 * XREFs of ?IsMonitorSpecificContent@CRenderTargetImageSource@@UEBA_NXZ @ 0x18015A930
 * Callers:
 *     <none>
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180045EA4 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CRenderTargetImageSource::IsMonitorSpecificContent(CRenderTargetImageSource *this)
{
  __int64 v1; // rcx
  char v2; // bl
  int v4; // [rsp+40h] [rbp+8h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 17);
  v2 = 0;
  v4 = 0;
  if ( (*(int (__fastcall **)(__int64, char *, int *, _QWORD))(*(_QWORD *)v1 + 104LL))(v1, &v5, &v4, 0LL) >= 0 )
    return DisplayId::IsSpecific((DisplayId *)&v4);
  return v2;
}
