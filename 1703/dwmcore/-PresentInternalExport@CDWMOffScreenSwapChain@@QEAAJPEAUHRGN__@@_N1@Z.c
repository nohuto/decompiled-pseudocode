/*
 * XREFs of ?PresentInternalExport@CDWMOffScreenSwapChain@@QEAAJPEAUHRGN__@@_N1@Z @ 0x1800CE8F4
 * Callers:
 *     ?PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@Z @ 0x1800CE700 (-PresentInternal@CDWMOffScreenSwapChain@@UEAAJPEAUHRGN__@@IIPEAURenderTargetPresentParameters@@@.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x18004F6E8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800711F0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z @ 0x180073A20 (-HrgnToRgnData@@YAJPEAUHRGN__@@PEAPEAU_RGNDATA@@PEAI@Z.c)
 *     ?CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z @ 0x1800CEC60 (-CopyFromTexture@CDWMOffScreenSwapChain@@QEAAJPEBUtagRECT@@@Z.c)
 *     TemplateEventDescriptor @ 0x1800D2908 (TemplateEventDescriptor.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_q @ 0x18013BB44 (Template_q.c)
 *     ?RemoveAt@?$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z @ 0x18019CD30 (-RemoveAt@-$DynArray@U_DWMIndirectMetaData@@$0A@@@QEAAJI@Z.c)
 *     Template_qn @ 0x18019CDC0 (Template_qn.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::PresentInternalExport(
        CDWMOffScreenSwapChain *this,
        HRGN hrgn,
        unsigned int *a3,
        char a4)
{
  unsigned int v4; // r15d
  char v5; // r13
  _DWORD *v7; // r14
  int v8; // esi
  char *v9; // r12
  int v10; // eax
  int v11; // edi
  unsigned int *v12; // r8
  __int64 v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 i; // rsi
  int v18; // eax
  HRGN v19; // rcx
  int v20; // edx
  __int64 v21; // rcx
  int v22; // r9d
  struct _RGNDATA *v23; // rdi
  char v24; // al
  __int64 nCount; // rcx
  DWORD v26; // esi
  unsigned int v27; // r12d
  _QWORD *v28; // r13
  __int128 v29; // xmm1
  int v30; // eax
  unsigned int v31; // eax
  __int64 v32; // rax
  _OWORD *v33; // rax
  int v34; // eax
  __int64 v35; // rax
  __int128 v36; // xmm1
  unsigned int v37; // [rsp+20h] [rbp-C8h]
  char v38; // [rsp+30h] [rbp-B8h]
  void *lpMem; // [rsp+38h] [rbp-B0h] BYREF
  __int128 v41; // [rsp+40h] [rbp-A8h] BYREF
  int v42; // [rsp+50h] [rbp-98h]
  unsigned int v43; // [rsp+54h] [rbp-94h]
  unsigned int v44; // [rsp+58h] [rbp-90h]
  struct _RGNDATA *v45; // [rsp+60h] [rbp-88h] BYREF
  HGDIOBJ ho[2]; // [rsp+78h] [rbp-70h]
  __int128 v47; // [rsp+88h] [rbp-60h]
  __int128 v48; // [rsp+98h] [rbp-50h] BYREF
  __int128 v49; // [rsp+A8h] [rbp-40h]

  lpMem = 0LL;
  v4 = 0;
  v42 = 0;
  v43 = 0;
  v5 = a4;
  v44 = 0;
  v41 = 0LL;
  if ( !*((_QWORD *)this + 61) || (v38 = 0, (_BYTE)a3) )
    v38 = 1;
  HrgnToRgnData(hrgn, (struct _RGNDATA **)&lpMem, a3);
  v7 = lpMem;
  if ( !lpMem || !*((_QWORD *)this + 49) )
    goto LABEL_9;
  if ( !*((_DWORD *)lpMem + 2) )
  {
    v18 = CDWMOffScreenSwapChain::CopyFromTexture(this, (const struct tagRECT *)lpMem + 1);
    v11 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x255u);
      goto LABEL_17;
    }
LABEL_9:
    if ( !EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &MILEVENT_MEDIA_UCE_BLTDESKTOP_RECT)
      || (v19 = (HRGN)*((_QWORD *)this + 27), v45 = 0LL, HrgnToRgnData(v19, &v45, v12), (v23 = v45) == 0LL) )
    {
LABEL_10:
      v13 = 0LL;
      if ( *((_DWORD *)this + 64) )
      {
        v27 = (unsigned int)lpMem;
        v28 = (_QWORD *)((char *)this + 232);
        do
        {
          v29 = *(_OWORD *)(*v28 + 48 * v13 + 16);
          v30 = *(_DWORD *)(*v28 + 48 * v13);
          v47 = *(_OWORD *)(*v28 + 48 * v13 + 32);
          if ( v30 == 1 )
          {
            v49 = v47;
            v31 = v4 + 1;
            v48 = v29;
            if ( v4 + 1 >= v4 )
              v27 = v4 + 1;
            if ( v31 < v4 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v31 < v4 ? 0x80070216 : 0, 0xB5u);
            }
            else if ( v27 > v43 )
            {
              v34 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v41, 0x20u, 1, &v48);
              if ( v34 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v34, 0xC0u);
              v4 = v44;
            }
            else
            {
              v32 = v4;
              v4 = v27;
              v33 = (_OWORD *)(v41 + 32 * v32);
              v44 = v27;
              *v33 = v29;
              v33[1] = v49;
            }
            if ( v38 )
            {
              DynArray<_DWMIndirectMetaData,0>::RemoveAt((char *)this + 232, (unsigned int)v13);
              LODWORD(v13) = v13 - 1;
            }
          }
          v13 = (unsigned int)(v13 + 1);
        }
        while ( (unsigned int)v13 < *((_DWORD *)this + 64) );
        v7 = lpMem;
        v5 = a4;
      }
      if ( v38 )
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 60) + 24LL))(
                *((_QWORD *)this + 60),
                *((_QWORD *)this + 27),
                v41,
                v4);
        v11 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2A7u);
LABEL_15:
          if ( v4 )
          {
            v44 = 0;
            DynArrayImpl<0>::ShrinkToSize((__int64)&v41, 0x20u);
          }
          goto LABEL_17;
        }
        v15 = *((_QWORD *)this + 61);
        if ( v15 && *((_DWORD *)this + 64) && v5 )
        {
          v11 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v15 + 56LL))(v15, *((_QWORD *)this + 29));
          if ( ((v11 + 2147467263) & 0xFFFFFFFB) == 0 )
            v11 = -2003304307;
          if ( v11 < 0 )
          {
            v37 = 703;
LABEL_60:
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v37);
            goto LABEL_15;
          }
        }
      }
      else
      {
        v11 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 61) + 56LL))(
                *((_QWORD *)this + 61),
                *((_QWORD *)this + 29),
                *((unsigned int *)this + 64));
        if ( ((v11 + 2147467263) & 0xFFFFFFFB) == 0 )
          v11 = -2003304307;
        if ( v11 < 0 )
        {
          v37 = 716;
          goto LABEL_60;
        }
      }
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 64); i = (unsigned int)(i + 1) )
      {
        v35 = *((_QWORD *)this + 29);
        v36 = *(_OWORD *)(v35 + 48 * i + 16);
        LODWORD(v35) = *(_DWORD *)(v35 + 48 * i);
        *(_OWORD *)ho = v36;
        if ( !(_DWORD)v35 && ho[1] )
          DeleteObject(ho[1]);
      }
      goto LABEL_15;
    }
    v24 = Microsoft_Windows_Dwm_CoreEnableBits;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_q(v21, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Start, v45->rdh.nCount);
      v24 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    nCount = v23->rdh.nCount;
    if ( (_DWORD)nCount )
    {
      v26 = 0;
      do
      {
        if ( (v24 & 0x20) != 0 )
        {
          Template_qn(nCount, v20, *((_QWORD *)this + 49) == 0LL, v22, (__int64)&v23->Buffer[16 * v26]);
          v24 = Microsoft_Windows_Dwm_CoreEnableBits;
        }
        ++v26;
      }
      while ( v26 < v23->rdh.nCount );
    }
    else
    {
      if ( (v24 & 0x20) == 0 )
      {
LABEL_38:
        WPF::ProcessHeapImpl::Free(v23);
        goto LABEL_10;
      }
      Template_qn(0, v20, *((_QWORD *)this + 49) == 0LL, v22, (__int64)&v23->rdh.rcBound);
      v24 = Microsoft_Windows_Dwm_CoreEnableBits;
    }
    if ( (v24 & 0x20) != 0 )
      TemplateEventDescriptor(nCount, &MILEVENT_MEDIA_UCE_BLTDESKTOP_Stop);
    goto LABEL_38;
  }
  v8 = 0;
  v9 = (char *)lpMem + 32;
  while ( 1 )
  {
    v10 = CDWMOffScreenSwapChain::CopyFromTexture(this, (const struct tagRECT *)&v9[16 * v8]);
    v11 = v10;
    if ( v10 < 0 )
      break;
    if ( (unsigned int)++v8 >= v7[2] )
      goto LABEL_9;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x250u);
LABEL_17:
  if ( v7 )
    WPF::ProcessHeapImpl::Free(v7);
  DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v41);
  return (unsigned int)v11;
}
