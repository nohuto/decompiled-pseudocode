/*
 * XREFs of ?ProcessSetComponents@CManipulationTransform@@QEAAJPEAVCResourceTable@@PEBUMILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS@@@Z @ 0x180037AA4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z @ 0x18002E640 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@PEAI@Z.c)
 * Callees:
 *     ?CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z @ 0x18001AD08 (-CalculateMatrixFromDelta@CManipulationTransform@@SAXAEBUD2DVector3@@00PEAUD2DMatrix@@@Z.c)
 *     ?SetProperty@CManipulationTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180037930 (-SetProperty@CManipulationTransform@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CManipulationTransform::ProcessSetComponents(
        CManipulationTransform *this,
        struct CResourceTable *a2,
        const struct MILCMD_MANIPULATIONTRANSFORM_SETCOMPONENTS *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // eax
  int v9; // eax
  int v11; // [rsp+38h] [rbp-28h]
  int v12; // [rsp+38h] [rbp-28h]
  int v13; // [rsp+38h] [rbp-28h]
  int v14; // [rsp+38h] [rbp-28h]
  __int64 v15; // [rsp+40h] [rbp-20h] BYREF
  int v16; // [rsp+48h] [rbp-18h]

  v11 = *((_DWORD *)a3 + 4);
  v15 = *((_QWORD *)a3 + 1);
  v16 = v11;
  v5 = CManipulationTransform::SetProperty(this, 0, 52, (__int64)&v15);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x5Du);
  }
  else
  {
    v12 = *((_DWORD *)a3 + 7);
    v15 = *(_QWORD *)((char *)a3 + 20);
    v16 = v12;
    v7 = CManipulationTransform::SetProperty(this, 1u, 52, (__int64)&v15);
    v6 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x60u);
    }
    else
    {
      v13 = *((_DWORD *)a3 + 10);
      v15 = *((_QWORD *)a3 + 4);
      v16 = v13;
      v8 = CManipulationTransform::SetProperty(this, 2u, 52, (__int64)&v15);
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x63u);
      }
      else
      {
        v14 = *((_DWORD *)a3 + 13);
        v15 = *(_QWORD *)((char *)a3 + 44);
        v16 = v14;
        v9 = CManipulationTransform::SetProperty(this, 3u, 52, (__int64)&v15);
        v6 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v9, 0x66u);
        }
        else
        {
          if ( *((_BYTE *)this + 264) )
          {
            CManipulationTransform::CalculateMatrixFromDelta(
              (CManipulationTransform *)((char *)this + 152),
              (CManipulationTransform *)((char *)this + 176),
              (CManipulationTransform *)((char *)this + 188),
              (CManipulationTransform *)((char *)this + 200));
            *((_BYTE *)this + 264) = 0;
          }
          return 0;
        }
      }
    }
  }
  return v6;
}
