/*
 * XREFs of ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAX0KPEAUtagINPUTDEST@@@Z @ 0x1C000103C
 * Callers:
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBUtagDITCALLBACKSTRUCT@@_KW4HitTestToInputDestOptional@@@Z @ 0x1C006EECC (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBUtagDITCALLBACKST.c)
 *     ?SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z @ 0x1C0125E7C (-SetManipulationInputTarget@CTouchProcessor@@QEAAHIIPEAIIPEAX@Z.c)
 * Callees:
 *     ?GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C0001740 (-GetWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z.c)
 *     ?QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITION_INPUT_QUEUE@@@Z @ 0x1C00105C8 (-QueryInputQueueForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAUCOMPOSITIO.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C0010B70 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     WPP_RECORDER_SF_D @ 0x1C0051A08 (WPP_RECORDER_SF_D.c)
 *     __security_check_cookie @ 0x1C009D0D0 (__security_check_cookie.c)
 *     memset @ 0x1C00A2500 (memset.c)
 *     ?GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@Z @ 0x1C0150790 (-GetBaseWindowForInputType@CompositionInputObject@@QEBAJW4CompositionInputType@@PEAPEAUtagWND@@@.c)
 */

bool __fastcall CSpatialProcessor::ResolveInputSinkToINPUTDEST(
        CSpatialProcessor *this,
        void *a2,
        void *a3,
        int a4,
        struct tagINPUTDEST *a5)
{
  int v9; // edx
  PVOID *v10; // rdi
  unsigned int v11; // ebx
  int v12; // ecx
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm0
  int v23; // ecx
  PVOID Object[26]; // [rsp+30h] [rbp-D0h] BYREF
  int v25; // [rsp+100h] [rbp+0h] BYREF
  void *v26; // [rsp+108h] [rbp+8h]
  __int128 v27; // [rsp+110h] [rbp+10h]
  __int128 v28; // [rsp+120h] [rbp+20h]
  void *v29; // [rsp+130h] [rbp+30h]

  memset(&Object[2], 0, 0xC0uLL);
  if ( (int)CompositionInputObject::ResolveHandle(a2, 1u, 1, (struct CompositionInputObject **)Object) >= 0 )
  {
    v10 = (PVOID *)Object[0];
    if ( a4 == 1 )
    {
LABEL_6:
      v11 = 1;
      goto LABEL_7;
    }
    if ( a4 != 2 )
    {
      if ( a4 == 3 )
      {
        v11 = 4;
        goto LABEL_7;
      }
      if ( a4 == 4 )
        goto LABEL_6;
      if ( a4 != 5 )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_D(
          *((_QWORD *)this + 1),
          v9,
          8,
          11,
          (__int64)&WPP_c0e8e51727fb3f63ae4d58a2d0a2a26c_Traceguids,
          a4);
LABEL_14:
        ObfDereferenceObject(v10);
        goto LABEL_15;
      }
    }
    v11 = 3;
LABEL_7:
    HIDWORD(Object[3]) ^= (BYTE4(Object[3]) ^ (unsigned __int8)*((_DWORD *)Object[0] + 48)) & 1;
    CompositionInputObject::QueryInputQueueForInputType(Object[0], v11, &v25);
    if ( v25 == 2 )
    {
      CompositionInputObject::GetWindowForInputType(v10, v11, Object);
      if ( Object[0] )
      {
        v12 = LODWORD(Object[2]) | 4;
        HIDWORD(Object[13]) = 2;
        LODWORD(Object[2]) |= 4u;
        Object[12] = Object[0];
        goto LABEL_10;
      }
    }
    else if ( (unsigned int)(v25 - 3) <= 1 )
    {
      Object[0] = 0LL;
      CompositionInputObject::GetBaseWindowForInputType(v10, v11, Object);
      if ( Object[0] && (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Object[0] + 2) + 376LL) + 768LL) & 0x800000) != 0 )
      {
        v23 = LODWORD(Object[2]) | 4;
        HIDWORD(Object[13]) = 1;
        Object[12] = Object[0];
      }
      else
      {
        v23 = (int)Object[2];
      }
      v12 = v23 | 2;
      LODWORD(Object[2]) = v12;
      *(_OWORD *)&Object[7] = v27;
      Object[4] = a3;
      Object[11] = v29;
      *(_OWORD *)&Object[9] = v28;
      Object[5] = v26;
LABEL_10:
      if ( (v12 & 6) != 0 )
      {
        if ( v10[2] )
        {
          *(PVOID *)((char *)&Object[2] + 4) = v10[2];
          LODWORD(Object[2]) = v12 | 1;
        }
        Object[23] = 0LL;
      }
      goto LABEL_14;
    }
    v12 = (int)Object[2];
    goto LABEL_10;
  }
LABEL_15:
  v13 = *(_OWORD *)&Object[4];
  *(_OWORD *)a5 = *(_OWORD *)&Object[2];
  v14 = *(_OWORD *)&Object[6];
  *((_OWORD *)a5 + 1) = v13;
  v15 = *(_OWORD *)&Object[8];
  *((_OWORD *)a5 + 2) = v14;
  v16 = *(_OWORD *)&Object[10];
  *((_OWORD *)a5 + 3) = v15;
  v17 = *(_OWORD *)&Object[12];
  *((_OWORD *)a5 + 4) = v16;
  v18 = *(_OWORD *)&Object[14];
  *((_OWORD *)a5 + 5) = v17;
  *((_OWORD *)a5 + 6) = v18;
  *((_OWORD *)a5 + 7) = *(_OWORD *)&Object[16];
  v19 = *(_OWORD *)&Object[20];
  *((_OWORD *)a5 + 8) = *(_OWORD *)&Object[18];
  v20 = *(_OWORD *)&Object[22];
  *((_OWORD *)a5 + 9) = v19;
  v21 = *(_OWORD *)&Object[24];
  *((_OWORD *)a5 + 10) = v20;
  *((_OWORD *)a5 + 11) = v21;
  return *(_DWORD *)a5 != 0;
}
