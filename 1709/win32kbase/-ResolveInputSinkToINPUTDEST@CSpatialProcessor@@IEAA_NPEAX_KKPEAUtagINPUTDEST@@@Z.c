/*
 * XREFs of ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX_KKPEAUtagINPUTDEST@@@Z @ 0x1C00134C0
 * Callers:
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBUtagDITCALLBACKSTRUCT@@_KW4HitTestToInputDestOptional@@@Z @ 0x1C0012F80 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBUtagDITCALLBACKST.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z @ 0x1C0125480 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAI_KPEAX@Z.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHI_KPEAX@Z @ 0x1C01274DC (-StopAndEndInertia@CTouchProcessor@@QEAAHI_KPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C001802C (WPP_RECORDER_SF_d.c)
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C00215F0 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0021670 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     ?Release@CompositionObject@@QEBA_JXZ @ 0x1C003C7F0 (-Release@CompositionObject@@QEBA_JXZ.c)
 *     __security_check_cookie @ 0x1C00A7160 (__security_check_cookie.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 *     ?GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C01516F0 (-GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0151770 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 */

bool __fastcall CSpatialProcessor::ResolveInputSinkToINPUTDEST(
        CSpatialProcessor *this,
        void *a2,
        CompositionObject *a3,
        int a4,
        struct tagINPUTDEST *a5)
{
  int v9; // edx
  CompositionObject **v10; // rdi
  unsigned int v11; // ebx
  int v12; // ecx
  int v13; // ecx
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  CompositionObject *v26[50]; // [rsp+30h] [rbp-D0h] BYREF
  int v27; // [rsp+1C0h] [rbp+C0h] BYREF
  CompositionObject *v28; // [rsp+1C8h] [rbp+C8h]
  __int128 v29; // [rsp+1D0h] [rbp+D0h]
  __int128 v30; // [rsp+1E0h] [rbp+E0h]
  CompositionObject *v31; // [rsp+1F0h] [rbp+F0h]

  memset(&v26[2], 0, 0xC0uLL);
  if ( (int)CompositionInputObject::ResolveHandle(a2, 1u, 1, v26) >= 0 )
  {
    v10 = (CompositionObject **)v26[0];
    if ( a4 != 1 )
    {
      if ( a4 == 2 )
      {
LABEL_9:
        v11 = 3;
        goto LABEL_11;
      }
      if ( a4 == 3 )
      {
        v11 = 4;
        goto LABEL_11;
      }
      if ( a4 != 4 )
      {
        if ( a4 != 5 )
        {
          LOBYTE(v9) = 2;
          WPP_RECORDER_SF_d(
            *((_QWORD *)this + 1),
            v9,
            8,
            11,
            (__int64)&WPP_6f1f63322d693ac26b55e4617dc4ced1_Traceguids,
            a4);
LABEL_23:
          CompositionObject::Release((CompositionObject *)v10);
          goto LABEL_24;
        }
        goto LABEL_9;
      }
    }
    v11 = 1;
LABEL_11:
    HIDWORD(v26[3]) ^= (BYTE4(v26[3]) ^ (unsigned __int8)*((_DWORD *)v26[0] + 48)) & 1;
    v26[14] = (CompositionObject *)*((unsigned int *)v26[0] + 46);
    CompositionInputObject::QueryInputQueueForInputType(v26[0], v11, &v27);
    if ( v27 == 2 )
    {
      CompositionInputObject::GetWindowForInputType(v10, v11, v26);
      if ( v26[0] )
      {
        v13 = LODWORD(v26[2]) | 4;
        HIDWORD(v26[13]) = 2;
        LODWORD(v26[2]) |= 4u;
        v26[12] = v26[0];
LABEL_19:
        if ( (v13 & 6) != 0 )
        {
          if ( v10[2] )
          {
            *(CompositionObject **)((char *)&v26[2] + 4) = v10[2];
            LODWORD(v26[2]) = v13 | 1;
          }
          v26[23] = *((CompositionObject **)this + 5);
        }
        goto LABEL_23;
      }
    }
    else if ( (unsigned int)(v27 - 3) <= 1 )
    {
      v26[0] = 0LL;
      CompositionInputObject::GetBaseWindowForInputType(v10, v11, v26);
      if ( v26[0] && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)v26[0] + 2) + 400LL) + 776LL) & 0x800000) != 0 )
      {
        v12 = LODWORD(v26[2]) | 4;
        HIDWORD(v26[13]) = 1;
        v26[12] = v26[0];
LABEL_26:
        v13 = v12 | 2;
        LODWORD(v26[2]) = v13;
        *(_OWORD *)&v26[7] = v29;
        v26[4] = a3;
        v26[11] = v31;
        *(_OWORD *)&v26[9] = v30;
        v26[5] = v28;
        goto LABEL_19;
      }
      if ( v27 != 3 )
      {
        v12 = (int)v26[2];
        goto LABEL_26;
      }
      memset(&v26[26], 0, 0xC0uLL);
      *(_OWORD *)&v26[2] = *(_OWORD *)&v26[26];
      *(_OWORD *)&v26[4] = *(_OWORD *)&v26[28];
      *(_OWORD *)&v26[6] = *(_OWORD *)&v26[30];
      *(_OWORD *)&v26[8] = *(_OWORD *)&v26[32];
      *(_OWORD *)&v26[10] = *(_OWORD *)&v26[34];
      *(_OWORD *)&v26[12] = *(_OWORD *)&v26[36];
      *(_OWORD *)&v26[14] = *(_OWORD *)&v26[38];
      *(_OWORD *)&v26[16] = *(_OWORD *)&v26[40];
      *(_OWORD *)&v26[18] = *(_OWORD *)&v26[42];
      *(_OWORD *)&v26[20] = *(_OWORD *)&v26[44];
      *(_OWORD *)&v26[22] = *(_OWORD *)&v26[46];
      *(_OWORD *)&v26[24] = *(_OWORD *)&v26[48];
    }
    v13 = (int)v26[2];
    goto LABEL_19;
  }
LABEL_24:
  v14 = *(_OWORD *)&v26[4];
  *(_OWORD *)a5 = *(_OWORD *)&v26[2];
  v15 = *(_OWORD *)&v26[6];
  *((_OWORD *)a5 + 1) = v14;
  v16 = *(_OWORD *)&v26[8];
  *((_OWORD *)a5 + 2) = v15;
  v17 = *(_OWORD *)&v26[10];
  *((_OWORD *)a5 + 3) = v16;
  v18 = *(_OWORD *)&v26[12];
  *((_OWORD *)a5 + 4) = v17;
  v19 = *(_OWORD *)&v26[14];
  *((_OWORD *)a5 + 5) = v18;
  v20 = *(_OWORD *)&v26[16];
  *((_OWORD *)a5 + 6) = v19;
  v21 = *(_OWORD *)&v26[18];
  *((_OWORD *)a5 + 7) = v20;
  v22 = *(_OWORD *)&v26[20];
  *((_OWORD *)a5 + 8) = v21;
  v23 = *(_OWORD *)&v26[22];
  *((_OWORD *)a5 + 9) = v22;
  v24 = *(_OWORD *)&v26[24];
  *((_OWORD *)a5 + 10) = v23;
  *((_OWORD *)a5 + 11) = v24;
  return *(_DWORD *)a5 != 0;
}
