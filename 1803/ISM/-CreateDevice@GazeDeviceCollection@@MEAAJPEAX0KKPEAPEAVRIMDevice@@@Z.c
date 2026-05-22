/*
 * XREFs of ?CreateDevice@GazeDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x180073EC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Buyheadnode@?$_Tree_comp_alloc@V?$_Tmap_traits@W4GazeProperty@@GU?$less@W4GazeProperty@@@std@@V?$allocator@U?$pair@$$CBW4GazeProperty@@G@std@@@3@$0A@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBW4GazeProperty@@G@std@@PEAX@2@XZ @ 0x1800AF088 (-_Buyheadnode@-$_Tree_comp_alloc@V-$_Tmap_traits@W4GazeProperty@@GU-$less@W4GazeProperty@@@std@@.c)
 *     memset_0 @ 0x1800E1A3C (memset_0.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E20D0 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall GazeDeviceCollection::CreateDevice(
        GazeDeviceCollection *this,
        void *a2,
        void *a3,
        int a4,
        unsigned int a5,
        struct RIMDevice **a6)
{
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  _QWORD *v13; // [rsp+28h] [rbp-60h]
  _OWORD v14[4]; // [rsp+40h] [rbp-48h] BYREF

  v13 = operator new(0xF0uLL);
  v13[1] = a2;
  v13[2] = a3;
  *((_DWORD *)v13 + 6) = a4;
  *((_DWORD *)v13 + 10) = a5;
  v13[4] = 0LL;
  v13[6] = 0LL;
  *((_DWORD *)v13 + 14) = 0;
  memset_0((char *)v13 + 60, 0, 0x40uLL);
  *v13 = &GazeHidDevice::`vftable';
  memset_0(v14, 0, sizeof(v14));
  *((_OWORD *)v13 + 8) = v14[0];
  *((_OWORD *)v13 + 9) = v14[1];
  *((_OWORD *)v13 + 10) = v14[2];
  *((_OWORD *)v13 + 11) = v14[3];
  v13[24] = 0LL;
  v13[25] = 0LL;
  v13[26] = 0LL;
  v13[25] = std::_Tree_comp_alloc<std::_Tmap_traits<enum GazeProperty,unsigned short,std::less<enum GazeProperty>,std::allocator<std::pair<enum GazeProperty const,unsigned short>>,0>>::_Buyheadnode(
              v10,
              v9,
              v11);
  v13[28] = 0LL;
  *a6 = (struct RIMDevice *)v13;
  return 0LL;
}
