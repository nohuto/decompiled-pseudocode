/*
 * XREFs of ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1C00DDC30
 * Callers:
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C01B06DC (OutputDuplProcessRemoteSessionSetPointerShape.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0007228 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0007270 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C00072E0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C00DDFBC (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C01AD388 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C01AD890 (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01AD8FC (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C01B2E40 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPointerShapeChange(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        __int64 a4,
        UINT a5)
{
  __int64 v8; // rbx
  __m128i v9; // xmm2
  __int64 v10; // xmm0_8
  unsigned int v11; // eax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // r9
  OUTPUTDUPL_CONTEXT **v16; // rdi
  __int64 v17; // r15
  unsigned int v18; // ebx
  int v19; // r12d
  __int64 v21; // rax
  OUTPUTDUPL_MGR *v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  int v26; // [rsp+20h] [rbp-91h]
  _BYTE v27[16]; // [rsp+28h] [rbp-89h] BYREF
  _DXGKARG_SETPOINTERSHAPE v28; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v29[20]; // [rsp+60h] [rbp-51h] BYREF

  v26 = a4;
  if ( a3->VidPnSourceId >= *((_DWORD *)this + 13) )
  {
    v21 = WdLogNewEntry5_WdWarning(this, a2, a3, a4);
    *(_QWORD *)(v21 + 24) = a3->VidPnSourceId;
    *(_QWORD *)(v21 + 32) = this;
    WdLogEvent5_WdWarning(v21);
    return 3221225473LL;
  }
  else
  {
    v8 = *((_QWORD *)this + 2);
    v9 = *(__m128i *)&a3->VidPnSourceId;
    *(_OWORD *)&v28.Flags.0 = *(_OWORD *)&a3->Flags.0;
    v28.Height = a5;
    v10 = *(_QWORD *)&a3->XHot;
    v11 = _mm_cvtsi128_si32(v9);
    *(__m128i *)&v28.VidPnSourceId = v9;
    v28.Width = a4;
    *(_QWORD *)&v28.XHot = v10;
    v12 = 3LL * v11;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v27, *(struct DXGFASTMUTEX *const *)(v8 + 24LL * v11), (__int64)a3, a4);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v27);
    v16 = *(OUTPUTDUPL_CONTEXT ***)(v8 + 8 * v12 + 8);
    LODWORD(v17) = 0;
    v18 = 0;
    v19 = 1;
    if ( *((_DWORD *)this + 2) )
    {
      while ( 1 )
      {
        if ( *v16 && *((_DWORD *)*v16 + 79) )
        {
          if ( v19 )
          {
            if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
            {
              memset(v29, 0, sizeof(v29));
              OUTPUTDUPL_MGR::InitializePacketHeader(v22, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v29);
              v29[13] = a3->VidPnSourceId;
              v29[14] = a3->Flags.Value;
              v29[15] = v26;
              v29[16] = a5;
              v29[17] = a3->Pitch;
              v29[18] = a3->XHot;
              v29[19] = a3->YHot;
              v29[1] = 80;
              v29[12] = 3;
              OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v29, 1);
              OUTPUTDUPL_MGR::LogPointerPositionChangeParams(this, a2);
            }
            v19 = 0;
          }
          v23 = OUTPUTDUPL_CONTEXT::ProcessPointerShape(*v16, a2, &v28);
          v17 = v23;
          if ( v23 < 0 )
            break;
        }
        ++v18;
        ++v16;
        if ( v18 >= *((_DWORD *)this + 2) )
          goto LABEL_5;
      }
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v24, v13);
      v25[3] = v28.VidPnSourceId;
      v25[4] = v18;
      v25[5] = v17;
      WdLogEvent5_WdError(v25);
    }
LABEL_5:
    if ( v27[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v27, v13, v14, v15);
    return (unsigned int)v17;
  }
}
