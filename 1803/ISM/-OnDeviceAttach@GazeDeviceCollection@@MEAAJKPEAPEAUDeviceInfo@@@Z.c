/*
 * XREFs of ?OnDeviceAttach@GazeDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180073FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800030B0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z @ 0x18006E420 (-FindDeviceId@RIMDeviceCollection@@IEAAJKPEAPEAVRIMDevice@@PEAK@Z.c)
 *     ?OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x180074F90 (-OnDeviceAttach@HIDDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 *     ?Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z @ 0x180075AF4 (-Initialize@GazeHidDevice@@QEAAJPEAUGazeDeviceInfo@@@Z.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800E1CF0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

__int64 __fastcall GazeDeviceCollection::OnDeviceAttach(
        GazeDeviceCollection *this,
        unsigned int a2,
        struct DeviceInfo **a3)
{
  _DWORD *v6; // rbx
  int DeviceId; // edi
  unsigned int *v8; // r9
  struct RIMDevice *v9; // r14
  unsigned int v10; // r12d
  _DWORD *v11; // rbp
  _OWORD *v12; // rax
  __int64 v13; // rcx
  _OWORD *v14; // rdx
  __int128 v15; // xmm1
  int v16; // eax
  unsigned int v17; // ebx
  struct RIMDevice *v19; // [rsp+20h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  void *Block; // [rsp+78h] [rbp+20h] BYREF

  v19 = 0LL;
  Block = operator new(0x3D8uLL);
  v6 = Block;
  memset_0(Block, 0, 0x3D8uLL);
  v6[2] = 984;
  Block = v6;
  DeviceId = HIDDeviceCollection::OnDeviceAttach(this, a2, (struct DeviceInfo **)&Block);
  if ( DeviceId >= 0 )
  {
    DeviceId = RIMDeviceCollection::FindDeviceId(this, a2, &v19, v8);
    if ( DeviceId >= 0 )
    {
      v9 = v19;
      DeviceId = 0;
      v10 = *((_DWORD *)v19 + 14) + 1032;
      v11 = operator new(v10);
      memset_0(v11, 0, v10);
      v12 = Block;
      v13 = 7LL;
      v14 = v11;
      do
      {
        *v14 = *v12;
        v14[1] = v12[1];
        v14[2] = v12[2];
        v14[3] = v12[3];
        v14[4] = v12[4];
        v14[5] = v12[5];
        v14[6] = v12[6];
        v14 += 8;
        v15 = v12[7];
        v12 += 8;
        *(v14 - 1) = v15;
        --v13;
      }
      while ( v13 );
      *v14 = *v12;
      v14[1] = v12[1];
      v14[2] = v12[2];
      v14[3] = v12[3];
      v14[4] = v12[4];
      *((_QWORD *)v14 + 10) = *((_QWORD *)v12 + 10);
      v11[2] = v10;
      v16 = GazeHidDevice::Initialize(v9, (struct GazeDeviceInfo *)v11);
      v17 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x9A,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\gazedevicecollection.cpp",
          (const char *)(unsigned int)v16);
        return v17;
      }
      *a3 = (struct DeviceInfo *)v11;
    }
  }
  if ( Block )
    operator delete(Block);
  return (unsigned int)DeviceId;
}
