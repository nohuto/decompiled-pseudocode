/*
 * XREFs of _lambda_b9d9cb4442cf1f3c11bfda5894fd36a4_::operator() @ 0x1C00EAA6C
 * Callers:
 *     KRegKey::QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb4442cf1f3c11bfda5894fd36a4____0 @ 0x1C00EA8E8 (KRegKey--QueryValueMultisz__lambda_ab37ff936e37ec89cf58545827f832d7___lambda_b9d9cb_ea_1C00EA8E8.c)
 * Callees:
 *     ?Initialize@KString@Rtl@@SAPEAU12@PEBG@Z @ 0x1C00B7E20 (-Initialize@KString@Rtl@@SAPEAU12@PEBG@Z.c)
 */

__int64 __fastcall lambda_b9d9cb4442cf1f3c11bfda5894fd36a4_::operator()(__int64 *a1, wchar_t *a2, int a3)
{
  struct Rtl::KString *v4; // rax
  __int64 v5; // rbx
  struct Rtl::KString *v6; // rsi
  struct Rtl::KString *v7; // rcx

  if ( !a3 )
  {
    v4 = Rtl::KString::Initialize(a2);
    v5 = *a1;
    v6 = v4;
    v7 = *(struct Rtl::KString **)(*a1 + 40);
    if ( v4 != v7 )
    {
      if ( v7 )
        ExFreePoolWithTag(v7, 0x7274534Bu);
      *(_QWORD *)(v5 + 40) = v6;
    }
  }
  return *(_QWORD *)(*a1 + 40) == 0LL ? 0xC000009A : 0;
}
