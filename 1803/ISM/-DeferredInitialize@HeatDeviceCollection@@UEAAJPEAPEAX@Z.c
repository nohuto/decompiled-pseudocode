/*
 * XREFs of ?DeferredInitialize@HeatDeviceCollection@@UEAAJPEAPEAX@Z @ 0x180073B30
 * Callers:
 *     <none>
 * Callees:
 *     ?Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z @ 0x180074E7C (-Initialize@HIDDeviceCollection@@QEAAJKQEAU_RIM_USAGE_ANDPAGE@@KKPEAPEAX@Z.c)
 */

__int64 __fastcall HeatDeviceCollection::DeferredInitialize(
        HeatDeviceCollection *this,
        void **a2,
        __int64 a3,
        unsigned int a4)
{
  int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = 851983;
  return HIDDeviceCollection::Initialize(this, (unsigned int)a2, (struct _RIM_USAGE_ANDPAGE *const)&v5, a4, 1u, a2);
}
