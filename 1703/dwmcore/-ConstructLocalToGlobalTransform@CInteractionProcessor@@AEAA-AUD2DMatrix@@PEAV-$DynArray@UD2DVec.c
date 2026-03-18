/*
 * XREFs of ?ConstructLocalToGlobalTransform@CInteractionProcessor@@AEAA?AUD2DMatrix@@PEAV?$DynArray@UD2DVector3@@$0A@@@@Z @ 0x18018DD88
 * Callers:
 *     ??$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@CInteractionProcessor@@QEAAJPEAV?$CInputTypeContext@UDwmTouchInteractionConfigurationPrimitive@@U?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@AEBUInteractionAxis@@PEAUInteractionAxisGroup@@PEAUIInteractionContextWrapper@@PEAW4InteractionState@@PEAU2@PEAUD2DMatrix@@66@Z @ 0x18018BFF4 (--$CalculateHandledInteractions@UDwmTouchInteractionConfigurationPrimitive@@U-$TMILFlagsEnum@W4F.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1800BB2F8 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800BD9E0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _anonymous_namespace_::CanAddThisColumnVectorToMatrix @ 0x18018D4E4 (_anonymous_namespace_--CanAddThisColumnVectorToMatrix.c)
 *     _anonymous_namespace_::ConvertVectorArrayToMatrix @ 0x18018E3F0 (_anonymous_namespace_--ConvertVectorArrayToMatrix.c)
 */

__int64 __fastcall CInteractionProcessor::ConstructLocalToGlobalTransform(__int64 *a1, __int64 a2, __int64 *a3)
{
  int v3; // eax
  __int64 v4; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rbx
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rcx
  const GUID *v14; // r8
  const GUID *v15; // r9
  __int64 v16; // r10
  __int64 v18; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-C0h]
  __int64 *v21; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v22; // [rsp+58h] [rbp-B0h] BYREF
  _QWORD v23[4]; // [rsp+60h] [rbp-A8h] BYREF
  int v24; // [rsp+80h] [rbp-88h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+88h] [rbp-80h] BYREF
  __int64 **v26; // [rsp+A8h] [rbp-60h]
  __int64 v27; // [rsp+B0h] [rbp-58h]
  __int64 *v28; // [rsp+B8h] [rbp-50h]
  __int64 v29; // [rsp+C0h] [rbp-48h]
  __int64 *v30; // [rsp+C8h] [rbp-40h]
  __int64 v31; // [rsp+D0h] [rbp-38h]
  __int64 *v32; // [rsp+D8h] [rbp-30h]
  __int64 v33; // [rsp+E0h] [rbp-28h]
  __int64 v34; // [rsp+E8h] [rbp-20h]
  __int64 v35; // [rsp+F0h] [rbp-18h]
  __int64 v36; // [rsp+F8h] [rbp-10h]
  __int64 v37; // [rsp+100h] [rbp-8h]
  __int64 v38; // [rsp+108h] [rbp+0h]
  __int64 v39; // [rsp+110h] [rbp+8h]
  __int64 v40; // [rsp+118h] [rbp+10h]
  __int64 v41; // [rsp+120h] [rbp+18h]
  __int64 v42; // [rsp+128h] [rbp+20h]
  __int64 v43; // [rsp+130h] [rbp+28h]
  __int64 v44; // [rsp+138h] [rbp+30h]
  __int64 v45; // [rsp+140h] [rbp+38h]
  __int64 v46; // [rsp+148h] [rbp+40h]
  __int64 v47; // [rsp+150h] [rbp+48h]
  __int64 v48; // [rsp+158h] [rbp+50h]
  __int64 v49; // [rsp+160h] [rbp+58h]
  __int64 v50; // [rsp+168h] [rbp+60h]
  __int64 v51; // [rsp+170h] [rbp+68h]

  v3 = *((_DWORD *)a3 + 6) - 1;
  v4 = v3;
  v24 = 0;
  memset(v23, 0, sizeof(v23));
  v8 = 0;
  if ( v3 >= 0 )
  {
    v9 = 12LL * v3;
    do
    {
      if ( v8 >= 3 )
        break;
      v10 = *a3;
      v11 = *(_DWORD *)(v9 + *a3 + 8);
      v19 = *(_QWORD *)(v9 + *a3);
      LODWORD(v20) = v11;
      if ( anonymous_namespace_::CanAddThisColumnVectorToMatrix((__int64)v23, v8, (const struct D2DVector3 *)&v19) )
      {
        v12 = v8++;
        v13 = 3 * v12;
        LODWORD(v12) = *(_DWORD *)(v9 + v10 + 8);
        *(_QWORD *)((char *)v23 + 4 * v13) = *(_QWORD *)(v9 + v10);
        *((_DWORD *)&v23[1] + v13) = v12;
      }
      v9 -= 12LL;
      --v4;
    }
    while ( v4 >= 0 );
  }
  anonymous_namespace_::ConvertVectorArrayToMatrix(a2, v23);
  if ( dword_18023D7F0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_18023D7F0, 2uLL) )
  {
    v21 = a1;
    v26 = &v21;
    v22 = *a1;
    v28 = &v22;
    v19 = a1[20];
    v30 = &v19;
    LODWORD(v18) = *((_DWORD *)a1 + 101);
    v32 = &v18;
    v36 = a2 + 4;
    v38 = a2 + 8;
    v40 = a2 + 16;
    v42 = a2 + 20;
    v44 = a2 + 24;
    v46 = a2 + 32;
    v48 = a2 + 36;
    v27 = 8LL;
    v29 = 8LL;
    v31 = 8LL;
    v33 = v16;
    v34 = a2;
    v35 = v16;
    v37 = v16;
    v39 = v16;
    v41 = v16;
    v43 = v16;
    v45 = v16;
    v47 = v16;
    v49 = v16;
    v50 = a2 + 40;
    v51 = v16;
    TlgWrite((TraceLoggingHProvider)&dword_18023D7F0, &unk_1801F8DDE, v14, v15, 0xFu, &pData);
  }
  return a2;
}
