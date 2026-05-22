/*
 * XREFs of ?OnDeviceAttach@ConsumerControlDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180073330
 * Callers:
 *     <none>
 * Callees:
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18006E420 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074F90 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800E212C (--_U@YAPEAX_K@Z.c)
 */

__int64 __fastcall ConsumerControlDeviceCollection::OnDeviceAttach(
        ConsumerControlDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  __int64 result; // rax
  void *v6; // rax
  int v7; // r11d
  char *v8; // rdx
  unsigned int v9; // r10d
  unsigned int *v10; // r9
  char v11; // r8
  __int64 v12; // rax
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int128 v15; // [rsp+20h] [rbp-18h]
  struct RIMDevice *v16; // [rsp+58h] [rbp+20h] BYREF

  result = HIDDeviceCollection::OnDeviceAttach(this, a2, a3);
  if ( (int)result >= 0 )
  {
    v6 = operator new[](0x28uLL);
    *(_QWORD *)&v15 = v6;
    if ( !v6 )
      return 2147942414LL;
    memset_0(v6, 0, 0x28uLL);
    v7 = *((_DWORD *)this + 2226);
    v8 = (char *)this + 2760;
    v9 = 0;
    DWORD2(v15) = 20;
    LOBYTE(v10) = 0;
    v11 = 0;
    if ( a2 == v7 )
      return 2147942487LL;
    v12 = 0LL;
    v13 = (_DWORD *)((char *)this + 2760);
    while ( *v13 != a2 )
    {
      if ( !v11 && *v13 == v7 )
      {
        v9 = v12;
        v11 = 1;
      }
      v12 = (unsigned int)(v12 + 1);
      v13 += 6;
      if ( (unsigned int)v12 >= 0x100 )
        goto LABEL_14;
    }
    LOBYTE(v10) = 1;
    *(_OWORD *)((char *)this + 24 * v12 + 2768) = v15;
LABEL_14:
    result = 0LL;
    if ( !(_BYTE)v10 )
    {
      if ( v11 )
      {
        v14 = 3LL * v9;
        *(_DWORD *)&v8[8 * v14] = a2;
        *(_OWORD *)&v8[8 * v14 + 8] = v15;
        return RIMDeviceCollection::FindDeviceId(this, a2, &v16, v10);
      }
      result = 2147500037LL;
    }
    if ( (int)result < 0 )
      return result;
    return RIMDeviceCollection::FindDeviceId(this, a2, &v16, v10);
  }
  return result;
}
