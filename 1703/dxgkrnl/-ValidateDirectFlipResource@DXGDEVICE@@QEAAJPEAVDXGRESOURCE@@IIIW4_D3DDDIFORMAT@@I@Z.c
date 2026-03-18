/*
 * XREFs of ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C01898D8
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C01883E4 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C00CFC9C (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
 */

__int64 __fastcall DXGDEVICE::ValidateDirectFlipResource(
        DXGDEVICE *this,
        struct DXGRESOURCE *a2,
        int a3,
        int a4,
        unsigned int a5,
        enum _D3DDDIFORMAT a6,
        unsigned int a7)
{
  __int64 v8; // rax
  _QWORD *v9; // r14
  unsigned int v10; // esi
  _QWORD *v11; // rbx
  unsigned int v12; // eax
  ADAPTER_RENDER *v13; // rcx
  __int64 v14; // r8
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // rbp
  _QWORD *v20; // rax
  struct _DXGKARG_DESCRIBEALLOCATION v21; // [rsp+20h] [rbp-68h] BYREF
  int v22; // [rsp+A0h] [rbp+18h]

  v22 = a3;
  if ( (*((_DWORD *)a2 + 1) & 1) != 0 )
  {
    v8 = *((_QWORD *)a2 + 7);
    if ( v8 )
    {
      if ( *(_DWORD *)(v8 + 124) == a7 )
      {
        v9 = *(_QWORD **)(v8 + 128);
        v10 = 0;
        if ( !a7 )
          return 0LL;
        while ( 1 )
        {
          v11 = v9 - 6;
          v12 = *((_DWORD *)v9 - 11);
          if ( (v12 & 0x2000) == 0 || a3 != ((v12 >> 6) & 0xF) )
            break;
          memset(&v21.Width, 0, 0x28uLL);
          v13 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
          v21.hAllocation = (HANDLE)v11[2];
          v15 = ADAPTER_RENDER::DdiDescribeAllocation(v13, &v21, v14);
          v18 = v15;
          if ( v15 < 0 )
          {
            v20 = (_QWORD *)WdLogNewEntry5_WdError(v17, v16);
            v20[3] = v18;
            v20[4] = this;
            v20[5] = v11[2];
            v20[6] = v11;
            WdLogEvent5_WdError(v20);
            return (unsigned int)v18;
          }
          if ( a4 != v21.Width || a5 != v21.Height || a6 != v21.Format )
            return 3221225485LL;
          v9 = (_QWORD *)*v9;
          ++v10;
          a3 = v22;
          if ( v10 >= a7 )
            return 0LL;
        }
      }
    }
  }
  return 3221225485LL;
}
