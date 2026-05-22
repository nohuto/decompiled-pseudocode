/*
 * XREFs of ?Initialize@RIMDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x18006D978
 * Callers:
 *     ?Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z @ 0x180074E60 (-Initialize@HIDDeviceCollection@@UEAAJKKPEAPEAX@Z.c)
 * Callees:
 *     ?Close@RIMDeviceCollection@@IEAAXXZ @ 0x18006D864 (-Close@RIMDeviceCollection@@IEAAXXZ.c)
 *     ?InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z @ 0x18006E058 (-InitializeRIM@RIMDeviceCollection@@IEAAJKPEAPEAX@Z.c)
 *     ?InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ @ 0x18006E10C (-InitializeSyncObjects@RIMDeviceCollection@@IEAAJXZ.c)
 */

__int64 __fastcall RIMDeviceCollection::Initialize(
        RIMDeviceCollection *this,
        unsigned int a2,
        unsigned int a3,
        void **a4)
{
  int v8; // edi
  int v9; // edi
  __int64 v11; // [rsp+50h] [rbp-18h] BYREF

  v11 = 0LL;
  v8 = RIMDeviceCollection::InitializeSyncObjects(this);
  if ( v8 < 0 )
    goto LABEL_7;
  *((_DWORD *)this + 8) = a2;
  v9 = RIMRegisterForInput(
         a2,
         0LL,
         0LL,
         0LL,
         *((_QWORD *)this + 6),
         *((_QWORD *)this + 8),
         *((_QWORD *)this + 9),
         this,
         RIMDeviceCollection::OnDeviceChangeCallbackStatic,
         &v11);
  if ( v9 < 0 )
  {
    v8 = v9 | 0x10000000;
    if ( v8 < 0 )
      goto LABEL_7;
  }
  if ( !*((_QWORD *)this + 10) )
    *((_QWORD *)this + 10) = v11;
  v8 = RIMDeviceCollection::InitializeRIM(this, a3, a4);
  if ( v8 < 0 )
LABEL_7:
    RIMDeviceCollection::Close(this);
  return (unsigned int)v8;
}
