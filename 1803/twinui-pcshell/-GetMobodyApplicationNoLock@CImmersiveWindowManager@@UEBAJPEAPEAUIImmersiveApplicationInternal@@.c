/*
 * XREFs of ?GetMobodyApplicationNoLock@CImmersiveWindowManager@@UEBAJPEAPEAUIImmersiveApplicationInternal@@@Z @ 0x180115EB0
 * Callers:
 *     <none>
 * Callees:
 *     CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_1b8bc1ec9f882b9c346a65f9a9da87be___ @ 0x18011531C (CActivationBasedCollection_Microsoft--WRL--ComPtr_IImmersiveApplicationInternal___-_ea_18011531C.c)
 */

__int64 __fastcall CImmersiveWindowManager::GetMobodyApplicationNoLock(
        CImmersiveWindowManager *this,
        struct IImmersiveApplicationInternal **a2)
{
  struct IImmersiveApplicationInternal **v4; // [rsp+30h] [rbp+8h] BYREF

  *a2 = 0LL;
  v4 = a2;
  CActivationBasedCollection_Microsoft::WRL::ComPtr_IImmersiveApplicationInternal___::ForEach__lambda_1b8bc1ec9f882b9c346a65f9a9da87be___(
    (__int64)this + 48,
    &v4);
  return *a2 == 0LL ? 0x8002802B : 0;
}
