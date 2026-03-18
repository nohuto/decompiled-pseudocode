/*
 * XREFs of ?ValidateDirectFlipResource@DXGDEVICE@@QEAAJPEAVDXGRESOURCE@@IIIW4_D3DDDIFORMAT@@I@Z @ 0x1C010B534
 * Callers:
 *     ?PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z @ 0x1C010B640 (-PinDirectFlipResources@DXGDEVICE@@QEAAJIPEBVDXGRESOURCEREFERENCE@@_N@Z.c)
 * Callees:
 *     memset @ 0x1C001C940 (memset.c)
 *     ?DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z @ 0x1C010EEAC (-DdiDescribeAllocation@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESCRIBEALLOCATION@@@Z.c)
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
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbp
  _QWORD *v18; // rax
  struct _DXGKARG_DESCRIBEALLOCATION v19; // [rsp+20h] [rbp-68h] BYREF
  int v20; // [rsp+A0h] [rbp+18h]

  v20 = a3;
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
          memset(&v19, 0, sizeof(v19));
          v13 = (ADAPTER_RENDER *)*((_QWORD *)this + 2);
          v19.hAllocation = (HANDLE)v11[2];
          v14 = ADAPTER_RENDER::DdiDescribeAllocation(v13, &v19);
          v16 = v14;
          if ( v14 < 0 )
          {
            v18 = (_QWORD *)WdLogNewEntry5_WdError(v15);
            v18[3] = v16;
            v18[4] = this;
            v18[5] = v11[2];
            v18[6] = v11;
            WdLogEvent5_WdError(v18);
            return (unsigned int)v16;
          }
          if ( a4 != v19.Width || a5 != v19.Height || a6 != v19.Format )
            return 3221225485LL;
          v9 = (_QWORD *)*v9;
          ++v10;
          a3 = v20;
          if ( v10 >= a7 )
            return 0LL;
        }
      }
    }
  }
  return 3221225485LL;
}
