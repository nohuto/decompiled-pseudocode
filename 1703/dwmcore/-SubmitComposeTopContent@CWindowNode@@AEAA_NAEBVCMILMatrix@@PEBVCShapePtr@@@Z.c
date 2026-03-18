/*
 * XREFs of ?SubmitComposeTopContent@CWindowNode@@AEAA_NAEBVCMILMatrix@@PEBVCShapePtr@@@Z @ 0x180162F24
 * Callers:
 *     ?CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitmapInterpolationMode@@PEBV?$CRectF@UPageInPixels@CoordinateSpace@@@@@Z @ 0x180052FA0 (-CollectAdditionalDirtyRegion@CWindowNode@@UEAAJPEAVCDirtyRegion@@AEBVCMILMatrix@@W4Enum@MilBitm.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CWindowNode::SubmitComposeTopContent(
        CWindowNode *this,
        const struct CMILMatrix *a2,
        const struct CShapePtr *a3)
{
  char v3; // bl
  __int64 v7; // r14
  unsigned int v8; // edi
  __int64 v9; // rbp
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // eax

  v3 = 0;
  v7 = 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(*((_QWORD *)this + 2) + 32LL);
  if ( *(_DWORD *)(v9 + 80) )
  {
    while ( 1 )
    {
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 8LL * v8);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v10 + 264LL))(v10) )
        break;
      if ( ++v8 >= *(_DWORD *)(v9 + 80) )
        goto LABEL_6;
    }
    v7 = *(_QWORD *)(*(_QWORD *)(v9 + 56) + 8LL * v8);
  }
LABEL_6:
  if ( !*((_BYTE *)this + 987) )
  {
    v11 = *((_QWORD *)this + 95);
    if ( v11 )
    {
      if ( *(_QWORD *)a3 && v7 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, const struct CMILMatrix *))(*(_QWORD *)v7 + 184LL))(
                v7,
                v11,
                *(_QWORD *)a3,
                a2);
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x1126u);
        }
        else
        {
          v3 = 1;
          *((_BYTE *)this + 987) = 1;
        }
      }
    }
  }
  return v3;
}
