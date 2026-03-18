/*
 * XREFs of ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0002648
 * Callers:
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C001B1F4 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z @ 0x1C011B080 (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIPEAX@Z.c)
 *     ?StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z @ 0x1C011D86C (-StopAndEndInertia@CTouchProcessor@@QEAAHIPEAX@Z.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C0002D30 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C0002DB0 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C000FC20 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0073C90 (__security_check_cookie.c)
 *     memset @ 0x1C0079EC0 (memset.c)
 *     WPP_RECORDER_SF_d @ 0x1C00E7F18 (WPP_RECORDER_SF_d.c)
 *     ?GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C015FDE0 (-GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@.c)
 */

bool __fastcall CSpatialProcessor::ResolveInputSinkToINPUTDEST(
        CSpatialProcessor *this,
        void *a2,
        int a3,
        struct tagINPUTDEST *a4)
{
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  int v17; // edx
  _QWORD *v18; // rdi
  unsigned int v19; // esi
  __int64 v20; // rax
  int v21; // ebx
  __int64 v22; // rax
  __int64 v23; // rcx
  __int128 v24; // xmm1
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  int v35; // eax
  PVOID Object[2]; // [rsp+30h] [rbp-D0h] BYREF
  _OWORD v37[22]; // [rsp+40h] [rbp-C0h] BYREF
  int v38; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v39; // [rsp+1A8h] [rbp+A8h]
  __int128 v40; // [rsp+1B0h] [rbp+B0h]
  __int128 v41; // [rsp+1C0h] [rbp+C0h]
  __int64 v42; // [rsp+1D0h] [rbp+D0h]

  memset(v37, 0, 0xB0uLL);
  v8 = v37[1];
  *(_OWORD *)a4 = v37[0];
  v9 = v37[2];
  *((_OWORD *)a4 + 1) = v8;
  v10 = v37[3];
  *((_OWORD *)a4 + 2) = v9;
  v11 = v37[4];
  *((_OWORD *)a4 + 3) = v10;
  v12 = v37[5];
  *((_OWORD *)a4 + 4) = v11;
  v13 = v37[6];
  *((_OWORD *)a4 + 5) = v12;
  v14 = v37[8];
  *((_OWORD *)a4 + 6) = v13;
  *((_OWORD *)a4 + 7) = v37[7];
  v15 = v37[9];
  *((_OWORD *)a4 + 8) = v14;
  v16 = v37[10];
  *((_OWORD *)a4 + 9) = v15;
  *((_OWORD *)a4 + 10) = v16;
  memset(v37, 0, 0xB0uLL);
  if ( (int)CompositionInputObject::ResolveHandle(a2, 1u, 1, (struct CompositionInputObject **)Object) >= 0 )
  {
    v18 = Object[0];
    if ( a3 == 1 )
    {
LABEL_6:
      v19 = 1;
      goto LABEL_7;
    }
    if ( a3 != 2 )
    {
      if ( a3 == 3 )
      {
        v19 = 4;
        goto LABEL_7;
      }
      if ( a3 == 4 )
        goto LABEL_6;
      if ( a3 != 5 )
      {
        LOBYTE(v17) = 2;
        WPP_RECORDER_SF_d(
          *((_QWORD *)this + 1),
          v17,
          8,
          12,
          (__int64)&WPP_d9096e32b26035e698e53624e5db1f74_Traceguids,
          a3);
LABEL_16:
        ObfDereferenceObject(v18);
        goto LABEL_17;
      }
    }
    v19 = 3;
LABEL_7:
    v20 = *((unsigned int *)Object[0] + 46);
    v21 = *((_DWORD *)Object[0] + 48) & 1;
    HIDWORD(v37[0]) = v21;
    *((_QWORD *)&v37[5] + 1) = v20;
    CompositionInputObject::QueryInputQueueForInputType(Object[0], v19, &v38);
    if ( v38 == 2 )
    {
      CompositionInputObject::GetWindowForInputType(v18, v19, Object);
      if ( Object[0] )
      {
        LODWORD(v37[0]) |= 4u;
        *((PVOID *)&v37[4] + 1) = Object[0];
        v22 = *((_QWORD *)Object[0] + 2);
        DWORD1(v37[5]) = 2;
        if ( (*(_DWORD *)(*(_QWORD *)(v22 + 416) + 812LL) & 0x1000000) != 0 )
          v21 = 0;
        HIDWORD(v37[0]) = v21;
      }
      goto LABEL_12;
    }
    if ( (unsigned int)(v38 - 3) <= 1 )
    {
      Object[0] = 0LL;
      CompositionInputObject::GetBaseWindowForInputType(v18, v19, Object);
      if ( Object[0] )
      {
        v35 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object[0] + 2) + 416LL) + 812LL);
        if ( (v35 & 0x800000) != 0 )
        {
          LODWORD(v37[0]) |= 4u;
          DWORD1(v37[5]) = 1;
          *((PVOID *)&v37[4] + 1) = Object[0];
        }
        if ( (v35 & 0x1000000) != 0 )
          HIDWORD(v37[0]) = v21 & 0xFFFFFFFE;
        goto LABEL_30;
      }
      if ( v38 != 3 )
      {
LABEL_30:
        LODWORD(v37[0]) |= 2u;
        v37[2] = v40;
        *(_QWORD *)&v37[4] = v42;
        v37[3] = v41;
        *(_QWORD *)&v37[1] = v39;
        goto LABEL_12;
      }
      memset(&v37[11], 0, 0xB0uLL);
      v37[0] = v37[11];
      v37[1] = v37[12];
      v37[2] = v37[13];
      v37[3] = v37[14];
      v37[4] = v37[15];
      v37[5] = v37[16];
      v37[6] = v37[17];
      v37[7] = v37[18];
      v37[8] = v37[19];
      v37[9] = v37[20];
      v37[10] = v37[21];
    }
LABEL_12:
    if ( (v37[0] & 6) != 0 )
    {
      v23 = v18[2];
      if ( v23 )
      {
        LODWORD(v37[0]) |= 1u;
        *(_QWORD *)((char *)v37 + 4) = v23;
      }
      *(_QWORD *)&v37[10] = *((_QWORD *)this + 5);
    }
    goto LABEL_16;
  }
LABEL_17:
  if ( LODWORD(v37[0]) )
  {
    v24 = v37[1];
    *(_OWORD *)a4 = v37[0];
    v25 = v37[2];
    *((_OWORD *)a4 + 1) = v24;
    v26 = v37[3];
    *((_OWORD *)a4 + 2) = v25;
    v27 = v37[4];
    *((_OWORD *)a4 + 3) = v26;
    v28 = v37[5];
    *((_OWORD *)a4 + 4) = v27;
    v29 = v37[6];
    *((_OWORD *)a4 + 5) = v28;
    v30 = v37[7];
    *((_OWORD *)a4 + 6) = v29;
    v31 = v37[8];
    *((_OWORD *)a4 + 7) = v30;
    v32 = v37[9];
    *((_OWORD *)a4 + 8) = v31;
    v33 = v37[10];
    *((_OWORD *)a4 + 9) = v32;
    *((_OWORD *)a4 + 10) = v33;
  }
  return *(_DWORD *)a4 != 0;
}
