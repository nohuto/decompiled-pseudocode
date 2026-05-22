/*
 * XREFs of ?PromoteToPrimary@MPCInputProviderBase@@UEAAXXZ @ 0x18005FE40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MPCInputProviderBase::PromoteToPrimary(MPCInputProviderBase *this)
{
  *((_BYTE *)this + 360) = 0;
  (*(void (__fastcall **)(char *))(*((_QWORD *)this - 3) + 72LL))((char *)this - 24);
}
