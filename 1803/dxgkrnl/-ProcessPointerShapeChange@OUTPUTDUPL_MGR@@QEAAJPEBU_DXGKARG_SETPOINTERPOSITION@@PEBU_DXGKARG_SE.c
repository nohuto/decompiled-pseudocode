/*
 * XREFs of ?ProcessPointerShapeChange@OUTPUTDUPL_MGR@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z @ 0x1C00E2C80
 * Callers:
 *     OutputDuplProcessRemoteSessionSetPointerShape @ 0x1C01CDA2C (OutputDuplProcessRemoteSessionSetPointerShape.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00167D8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0016828 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C001688C (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C001AFD0 (__security_check_cookie.c)
 *     memset @ 0x1C001C940 (memset.c)
 *     ?InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z @ 0x1C00E2FD4 (-InitializePacketHeader@OUTPUTDUPL_MGR@@QEAAXPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@@Z.c)
 *     ?IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ @ 0x1C01C9FA8 (-IsHighFreqLoggingEnabled@OUTPUTDUPL_MGR@@QEAAHXZ.c)
 *     ?LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z @ 0x1C01CA4AC (-LogEtwAndDiagnostics@OUTPUTDUPL_MGR@@QEAAXHPEAU_DXGK_DIAG_OUTPUTDUPL_HEADER@@H@Z.c)
 *     ?LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z @ 0x1C01CA518 (-LogPointerPositionChangeParams@OUTPUTDUPL_MGR@@AEAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z.c)
 *     ?ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@@Z @ 0x1C01D2E40 (-ProcessPointerShape@OUTPUTDUPL_CONTEXT@@QEAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETP.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::ProcessPointerShapeChange(
        OUTPUTDUPL_MGR *this,
        const struct _DXGKARG_SETPOINTERPOSITION *a2,
        const struct _DXGKARG_SETPOINTERSHAPE *a3,
        UINT a4,
        UINT a5)
{
  __m128i v8; // xmm2
  __int64 v9; // rbx
  __int64 v10; // xmm0_8
  unsigned int v11; // eax
  __int64 v12; // rdi
  OUTPUTDUPL_CONTEXT **v13; // rdi
  __int64 v14; // r15
  unsigned int v15; // ebx
  int v16; // r12d
  OUTPUTDUPL_CONTEXT *v17; // r9
  __int64 v19; // rax
  OUTPUTDUPL_MGR *v20; // rcx
  int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rax
  _BYTE v25[16]; // [rsp+28h] [rbp-89h] BYREF
  _DXGKARG_SETPOINTERSHAPE v26; // [rsp+38h] [rbp-79h] BYREF
  _DWORD v27[20]; // [rsp+60h] [rbp-51h] BYREF

  if ( a3->VidPnSourceId >= *((_DWORD *)this + 13) )
  {
    v19 = WdLogNewEntry5_WdWarning(this, a2, a3);
    *(_QWORD *)(v19 + 24) = a3->VidPnSourceId;
    *(_QWORD *)(v19 + 32) = this;
    WdLogEvent5_WdWarning(v19);
    return 3221225473LL;
  }
  else
  {
    v8 = *(__m128i *)&a3->VidPnSourceId;
    v9 = *((_QWORD *)this + 2);
    *(_OWORD *)&v26.Flags.0 = *(_OWORD *)&a3->Flags.0;
    v26.Height = a5;
    v10 = *(_QWORD *)&a3->XHot;
    v11 = _mm_cvtsi128_si32(v8);
    *(__m128i *)&v26.VidPnSourceId = v8;
    v26.Width = a4;
    *(_QWORD *)&v26.XHot = v10;
    v12 = 3LL * v11;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v25, *(struct DXGFASTMUTEX *const *)(v9 + 24LL * v11), 0);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v25);
    v13 = *(OUTPUTDUPL_CONTEXT ***)(v9 + 8 * v12 + 8);
    LODWORD(v14) = 0;
    v15 = 0;
    v16 = 1;
    if ( *((_DWORD *)this + 2) )
    {
      while ( 1 )
      {
        v17 = *v13;
        if ( *v13 && *((_DWORD *)v17 + 79) )
        {
          if ( v16 )
          {
            if ( (unsigned int)OUTPUTDUPL_MGR::IsHighFreqLoggingEnabled(this) )
            {
              memset(v27, 0, sizeof(v27));
              OUTPUTDUPL_MGR::InitializePacketHeader(v20, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v27);
              v27[13] = a3->VidPnSourceId;
              v27[14] = a3->Flags.Value;
              v27[15] = a4;
              v27[16] = a5;
              v27[17] = a3->Pitch;
              v27[18] = a3->XHot;
              v27[19] = a3->YHot;
              v27[1] = 80;
              v27[12] = 3;
              OUTPUTDUPL_MGR::LogEtwAndDiagnostics(this, 0, (struct _DXGK_DIAG_OUTPUTDUPL_HEADER *)v27, 1);
              OUTPUTDUPL_MGR::LogPointerPositionChangeParams(this, a2);
              v17 = *v13;
            }
            v16 = 0;
          }
          v21 = OUTPUTDUPL_CONTEXT::ProcessPointerShape(v17, a2, &v26);
          v14 = v21;
          if ( v21 < 0 )
            break;
        }
        ++v15;
        ++v13;
        if ( v15 >= *((_DWORD *)this + 2) )
          goto LABEL_5;
      }
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v22);
      v23[3] = v26.VidPnSourceId;
      v23[4] = v15;
      v23[5] = v14;
      WdLogEvent5_WdError(v23);
    }
LABEL_5:
    if ( v25[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v25);
    return (unsigned int)v14;
  }
}
