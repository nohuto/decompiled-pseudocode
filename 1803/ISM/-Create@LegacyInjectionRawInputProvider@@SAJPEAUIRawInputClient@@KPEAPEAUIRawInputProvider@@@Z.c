/*
 * XREFs of ?Create@LegacyInjectionRawInputProvider@@SAJPEAUIRawInputClient@@KPEAPEAUIRawInputProvider@@@Z @ 0x18006B430
 * Callers:
 *     <none>
 * Callees:
 *     ??0LegacyInjectionRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z @ 0x18006B1BC (--0LegacyInjectionRawInputProvider@@IEAA@PEAUIRawInputClient@@@Z.c)
 *     ?Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ @ 0x18006B4BC (-Initialize@LegacyInjectionRawInputProvider@@IEAAJXZ.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 */

__int64 __fastcall LegacyInjectionRawInputProvider::Create(
        struct IRawInputClient *a1,
        __int64 a2,
        struct IRawInputProvider **a3)
{
  LegacyInjectionRawInputProvider *v5; // rax
  LegacyInjectionRawInputProvider *v6; // rbx
  __int64 result; // rax

  if ( !a1 || !a3 )
    return 2147942487LL;
  v5 = (LegacyInjectionRawInputProvider *)malloc(0x70uLL);
  v6 = v5;
  if ( v5 )
    memset_0(v5, 0, 0x70uLL);
  if ( v6 )
    v6 = LegacyInjectionRawInputProvider::LegacyInjectionRawInputProvider(v6, a1);
  if ( !v6 )
    return 2147942414LL;
  result = LegacyInjectionRawInputProvider::Initialize(v6);
  if ( (int)result >= 0 )
    *a3 = (LegacyInjectionRawInputProvider *)((char *)v6 + 16);
  return result;
}
