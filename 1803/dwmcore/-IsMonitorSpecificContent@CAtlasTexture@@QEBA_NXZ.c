/*
 * XREFs of ?IsMonitorSpecificContent@CAtlasTexture@@QEBA_NXZ @ 0x1801EC174
 * Callers:
 *     ?IsMonitorSpecificContent@CAtlasImageSource@@UEBA_NXZ @ 0x18020FC70 (-IsMonitorSpecificContent@CAtlasImageSource@@UEBA_NXZ.c)
 * Callees:
 *     ?IsSpecific@DisplayId@@QEBA_NXZ @ 0x180089E08 (-IsSpecific@DisplayId@@QEBA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CAtlasTexture::IsMonitorSpecificContent(CAtlasTexture *this)
{
  __int64 v1; // rcx
  char v2; // bl
  int v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+38h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 1);
  v2 = 0;
  v4 = 0;
  if ( (*(int (__fastcall **)(__int64, char *, int *))(*(_QWORD *)v1 + 136LL))(v1, &v5, &v4) >= 0 )
    return DisplayId::IsSpecific((DisplayId *)&v4);
  return v2;
}
