/*
 * XREFs of ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATION_INPUT_INFO@@PEAPEAV1@@Z @ 0x1801DCBA8
 * Callers:
 *     ?ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@@PEAX@Z @ 0x1801CFC38 (-ProcessManipulationThreadCallbackInput@CManipulationManager@@CAHPEAUtagMANIPULATION_INPUT_INFO@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18001F244 (-InternalRelease@-$ComPtr@VCD3DSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x180025080 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x18002B3E4 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

__int64 __fastcall CManipulationFrame::Create(
        const struct tagMANIPULATION_INPUT_INFO *a1,
        struct CManipulationFrame **a2)
{
  int v4; // eax
  unsigned int v5; // edi
  __int64 v6; // r8
  unsigned int v7; // r9d
  _QWORD *v8; // rbx
  __int64 (__fastcall ***v9)(_QWORD); // rsi
  __int64 v10; // rdx
  int v11; // eax
  int v12; // ecx
  unsigned int i; // r9d
  __int64 v14; // r8
  __int64 v15; // rdx
  _OWORD *v16; // rcx
  _OWORD *v17; // rax
  __int128 v18; // xmm1
  __int64 (__fastcall ***v20)(_QWORD); // [rsp+50h] [rbp+8h] BYREF

  v4 = *((_DWORD *)a1 + 2);
  v5 = 0;
  if ( v4
    && (v6 = (unsigned int)(v4 - 1), (unsigned __int64)(232 * v6) <= 0xFFFFFFFF)
    && (unsigned int)(232 * v6 + 328) >= 0x148 )
  {
    v7 = 232 * v6 + 328;
  }
  else
  {
    v7 = 0;
  }
  v8 = WPF::ProcessHeapImpl::AllocClear(v7);
  *a2 = 0LL;
  memset_0(v8, 0, 0x148uLL);
  v9 = (__int64 (__fastcall ***)(_QWORD))v8;
  if ( v8 )
  {
    v10 = *(_QWORD *)a1;
    v11 = *((_DWORD *)a1 + 2);
    v12 = *((_DWORD *)a1 + 6);
    *v8 = &CMILRefCountBase::`vftable';
    *v8 = &CManipulationFrame::`vftable';
    *((_DWORD *)v8 + 2) = 0;
    *((_DWORD *)v8 + 4) = v11;
    *((_DWORD *)v8 + 6) = v12;
    v8[4] = v10;
  }
  else
  {
    v9 = 0LL;
  }
  v20 = v9;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v20);
  if ( v9 )
  {
    for ( i = 0; i < *((_DWORD *)a1 + 2); LOBYTE(v9[v14 + 40]) &= ~1u )
    {
      v14 = 29LL * i;
      v15 = 224LL * i++;
      v16 = &v9[v14 + 12];
      v17 = (_OWORD *)((char *)a1 + v15 + 16);
      *v16 = *v17;
      v16[1] = v17[1];
      v16[2] = v17[2];
      v16[3] = v17[3];
      v16[4] = v17[4];
      v16[5] = v17[5];
      v16[6] = v17[6];
      v16 += 8;
      v18 = v17[7];
      v17 += 8;
      *(v16 - 1) = v18;
      *v16 = *v17;
      v16[1] = v17[1];
      v16[2] = v17[2];
      v16[3] = v17[3];
      v16[4] = v17[4];
      v16[5] = v17[5];
      v9[v14 + 15] = (__int64 (__fastcall **)(_QWORD))*(unsigned int *)((char *)a1 + v15 + 208);
    }
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v20);
    *a2 = (struct CManipulationFrame *)v9;
  }
  else
  {
    v5 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x31u);
  }
  Microsoft::WRL::ComPtr<CD3DSurface>::InternalRelease((__int64 *)&v20);
  return v5;
}
