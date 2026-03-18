/*
 * XREFs of ?ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x18019757C
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z @ 0x1800BF140 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAU_MIT_INPUT_INTEROP_MESSAGE@@PEAX@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180070274 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x1800BB1A4 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     McTemplateU0qq @ 0x180125258 (McTemplateU0qq.c)
 *     ?Insert@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@Z @ 0x180196154 (-Insert@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAAJ_NV-$ComPtr@VCManipulatio.c)
 *     ?OnInput@CManipulationManager@@AEAAXXZ @ 0x180196BD4 (-OnInput@CManipulationManager@@AEAAXXZ.c)
 *     ?Remove@?$CQueue@V?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA?AV?$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@_NPEAI@Z @ 0x180197C20 (-Remove@-$CQueue@V-$ComPtr@VCManipulationFrame@@@WRL@Microsoft@@@@AEAA-AV-$ComPtr@VCManipulation.c)
 *     ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x1801A40A0 (-Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CManipulationManager::ProcessManipulationThreadCallbackInput(
        struct tagMANIPULATION_INPUT_INFO *a1,
        CManipulationManager *this)
{
  int v4; // r14d
  signed int v5; // eax
  struct CManipulationFrame *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  signed int v9; // ebx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rcx
  DWORD CurrentThreadId; // eax
  __int64 v14; // rdx
  struct CManipulationFrame *v16; // [rsp+60h] [rbp+30h] BYREF
  struct CManipulationFrame *v17; // [rsp+70h] [rbp+40h] BYREF
  struct CManipulationFrame *v18; // [rsp+78h] [rbp+48h] BYREF

  v16 = 0LL;
  if ( !a1 )
    goto LABEL_20;
  v4 = *((_DWORD *)a1 + 6);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    McTemplateU0qq(Microsoft_Windows_Dwm_Core_Provider_Context, &MANIPULATION_FRAME_RECEIVED, v4, *((_DWORD *)a1 + 2));
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v16);
  v5 = CManipulationFrame::Create(a1, &v16);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v5, 0x30Au);
  }
  else
  {
    v6 = v16;
    v18 = v16;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v18);
    v17 = v6;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef((__int64 (__fastcall ****)(_QWORD))&v17);
    v9 = CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Insert(v8, v7, (__int64 *)&v17);
    Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v18);
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x30Cu);
    }
    else
    {
      if ( GetCurrentThreadId() == CManipulationManager::s_dwManipulationThreadId && this )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0qq(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &MANIPULATION_FRAME_QUEUED,
            v4,
            *((_DWORD *)a1 + 2));
        CManipulationManager::OnInput((unsigned __int64)this, v10, v11);
        goto LABEL_20;
      }
      if ( SetEvent(qword_1802727E8) )
      {
        if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
          McTemplateU0qq(
            Microsoft_Windows_Dwm_Core_Provider_Context,
            &MANIPULATION_FRAME_QUEUED,
            v4,
            *((_DWORD *)a1 + 2));
        goto LABEL_20;
      }
      CQueue<Microsoft::WRL::ComPtr<CManipulationFrame>>::Remove(v12, &v17, 0LL, 0LL);
      Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v17);
    }
  }
  AcquireSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
  CurrentThreadId = GetCurrentThreadId();
  v14 = 0LL;
  for ( dword_180272588 = CurrentThreadId; (unsigned int)v14 < *((_DWORD *)a1 + 2); v14 = (unsigned int)(v14 + 1) )
    CManipulationManager::s_rgPointerIds[v14] = *((_DWORD *)a1 + 52 * (unsigned int)v14 + 5);
  SetManipulationInputTarget(
    *((unsigned int *)a1 + 6),
    0LL,
    0LL,
    *((unsigned int *)a1 + 2),
    CManipulationManager::s_rgPointerIds);
  dword_180272588 = 0;
  ReleaseSRWLockExclusive(&CManipulationManager::s_rwPointerBufferLock);
LABEL_20:
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v16);
  return 1LL;
}
