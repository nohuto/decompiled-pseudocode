/*
 * XREFs of ?Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x180074E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HIDDeviceCollection::Initialize(HIDDeviceCollection *this, char a2, unsigned int a3, void **a4)
{
  if ( (a2 & 0x10) != 0 || (a2 & 8) != 0 || (a2 & 4) != 0 )
    return RIMDeviceCollection::Initialize(this, a2, a3, a4);
  else
    return 2147942487LL;
}
