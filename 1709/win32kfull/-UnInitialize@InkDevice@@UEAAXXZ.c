/*
 * XREFs of ?UnInitialize@InkDevice@@UEAAXXZ @ 0x1C021FF30
 * Callers:
 *     ??1InkDevice@@UEAA@XZ @ 0x1C021E304 (--1InkDevice@@UEAA@XZ.c)
 *     ?Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C021ED00 (-Initialize@InkDevice@@UEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 * Callees:
 *     memset @ 0x1C0145A00 (memset.c)
 *     ?UnInitialize@RimBackedDeviceBase@Rim@@UEAAXXZ @ 0x1C020BD60 (-UnInitialize@RimBackedDeviceBase@Rim@@UEAAXXZ.c)
 */

void __fastcall InkDevice::UnInitialize(InkDevice *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int128 v4; // xmm0
  __int128 v5; // xmm1
  __int64 v6; // rcx
  __int64 v7; // rcx
  _OWORD v8[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( *((_QWORD *)this + 2) )
  {
    Rim::RimBackedDeviceBase::UnInitialize(this);
    *((_QWORD *)this + 13) = 0LL;
    *((_DWORD *)this + 28) = 0;
    memset(v8, 0, sizeof(v8));
    v4 = v8[0];
    *((_DWORD *)this + 37) = 0;
    v5 = v8[1];
    v6 = *((_QWORD *)this + 19);
    *(_OWORD *)((char *)this + 116) = v4;
    *(_OWORD *)((char *)this + 132) = v5;
    if ( v6 )
    {
      Win32FreePool(v6, v2, v3);
      *((_QWORD *)this + 19) = 0LL;
    }
    v7 = *((_QWORD *)this + 20);
    if ( v7 )
    {
      Win32FreePool(v7, v2, v3);
      *((_QWORD *)this + 20) = 0LL;
    }
  }
}
