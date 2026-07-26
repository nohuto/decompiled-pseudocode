/*
 * XREFs of ?CheckRegistryForFilterBindLogicMode@BindRegistry@Ndis@@YAKXZ @ 0x1C00AA080
 * Callers:
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00BB0D0 (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV?$KArray@V?$unique_ptr@UNDIS_BIND_FILTER_LINK@@U?$default_delete@UNDIS_BIND_FILTER_LINK@@@wistd@@@wistd@@$00@Rtl@@1W4Flags@ReadBindingsOptions@2@@Z @ 0x1C00BE850 (-UpdateFilters@BindRegistry@Ndis@@YA_NPEAU_NDIS_MINIPORT_BLOCK@@AEAV-$KArray@V-$unique_ptr@UNDIS.c)
 * Callees:
 *     ??1KRegKey@@QEAA@XZ @ 0x1C0004100 (--1KRegKey@@QEAA@XZ.c)
 *     ?QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z @ 0x1C00B14CC (-QueryValueUlong@KRegKey@@QEAAJPEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z @ 0x1C00B1B90 (-Open@KRegKey@@QEAAJKPEBU_UNICODE_STRING@@PEAX@Z.c)
 */

__int64 __fastcall Ndis::BindRegistry::CheckRegistryForFilterBindLogicMode(Ndis::BindRegistry *this)
{
  unsigned int v1; // esi
  __int64 v2; // rcx
  const wchar_t *v3; // rax
  int v4; // edi
  int v5; // edx
  __int16 v6; // ax
  const wchar_t *v7; // rax
  __int64 v8; // rcx
  __int16 v9; // bx
  int v10; // eax
  struct _UNICODE_STRING v12; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF
  KRegKey v14; // [rsp+58h] [rbp+10h] BYREF

  v13 = 0;
  v1 = 0;
  v14.m_ptr = 0LL;
  *(_DWORD *)&v12.Length = 0;
  v2 = 0x7FFFLL;
  v12.Buffer = 0LL;
  v3 = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\NDIS\\Parameters";
  do
  {
    if ( !*v3 )
      break;
    ++v3;
    --v2;
  }
  while ( v2 );
  v4 = -1073741811;
  v5 = -1073741811;
  if ( v2 )
  {
    v5 = 0;
    v6 = 0x7FFF - v2;
  }
  else
  {
    v6 = 0;
  }
  if ( v2 )
  {
    v12.Buffer = L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\NDIS\\Parameters";
    v12.Length = 2 * v6;
    v12.MaximumLength = 2 * v6 + 2;
    v5 = KRegKey::Open(&v14, 1u, &v12, 0LL);
  }
  if ( v5 < 0 )
    goto LABEL_19;
  *(_DWORD *)&v12.Length = 0;
  v7 = L"FilterBindLogicMode";
  v12.Buffer = 0LL;
  v8 = 0x7FFFLL;
  do
  {
    if ( !*v7 )
      break;
    ++v7;
    --v8;
  }
  while ( v8 );
  if ( v8 )
  {
    v4 = 0;
    v9 = 0x7FFF - v8;
  }
  else
  {
    v9 = 0;
  }
  if ( v8 )
  {
    v12.Buffer = L"FilterBindLogicMode";
    v12.Length = 2 * v9;
    v12.MaximumLength = 2 * v9 + 2;
    v10 = KRegKey::QueryValueUlong(&v14, &v12, &v13);
    v1 = v13;
    v4 = v10;
  }
  if ( v4 < 0 )
LABEL_19:
    v1 = 0;
  KRegKey::~KRegKey(&v14);
  return v1;
}
