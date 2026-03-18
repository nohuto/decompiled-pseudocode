/*
 * XREFs of ?Create@CManipulationFrame@@SAJPEBUtagMANIPULATIONINPUTINFO@@PEAPEAV1@@Z @ 0x1800CB0A4
 * Callers:
 *     ?ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z @ 0x1800D20A0 (-ManipulationThreadCallback@CManipulationManager@@CAHPEAUtagMANIPULATIONINPUTINFO@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x18001A3C8 (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180022A2C (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z @ 0x1800576D8 (-AllocClear@ProcessHeapImpl@WPF@@SAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800D539C (memset_0.c)
 */

__int64 __fastcall CManipulationFrame::Create(
        const struct tagMANIPULATIONINPUTINFO *a1,
        struct CManipulationFrame **a2)
{
  unsigned int v4; // edi
  size_t v5; // rcx
  _QWORD *v6; // rbx
  __int64 (__fastcall ***v7)(_QWORD); // rsi
  __int64 v8; // rdx
  int v9; // eax
  int v10; // ecx
  unsigned int i; // r9d
  __int64 v12; // rax
  __int64 v13; // r8
  _OWORD *v14; // rax
  _OWORD *v15; // rdx
  unsigned __int64 v17; // rax
  unsigned int v18; // eax
  __int64 (__fastcall ***v19)(_QWORD); // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  if ( *(_DWORD *)a1
    && (v17 = 152LL * (unsigned int)(*(_DWORD *)a1 - 1), v17 <= 0xFFFFFFFF)
    && (v18 = v17 + 248, v18 >= 0xF8) )
  {
    v5 = v18;
  }
  else
  {
    v5 = 0LL;
  }
  v6 = WPF::ProcessHeapImpl::AllocClear(v5);
  *a2 = 0LL;
  memset_0(v6, 0, 0xF8uLL);
  v7 = (__int64 (__fastcall ***)(_QWORD))v6;
  if ( v6 )
  {
    v8 = *((_QWORD *)a1 + 1);
    v9 = *(_DWORD *)a1;
    v10 = *((_DWORD *)a1 + 6);
    *v6 = &CMILRefCountBase::`vftable';
    *v6 = &CManipulationFrame::`vftable';
    *((_DWORD *)v6 + 2) = 0;
    *((_DWORD *)v6 + 4) = v9;
    *((_DWORD *)v6 + 6) = v10;
    v6[4] = v8;
  }
  else
  {
    v7 = 0LL;
  }
  v19 = v7;
  Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v19);
  if ( v7 )
  {
    for ( i = 0; i < *(_DWORD *)a1; BYTE4(v7[v13 + 30]) &= ~1u )
    {
      v12 = i++;
      v13 = 19 * v12;
      v14 = (_OWORD *)((char *)a1 + 144 * v12);
      v15 = &v7[v13];
      v15[6] = v14[1];
      v15[7] = v14[2];
      v15[8] = v14[3];
      v15[9] = v14[4];
      v15[10] = v14[5];
      v15[11] = v14[6];
      v15[12] = v14[7];
      v15[13] = v14[8];
      v15[14] = v14[9];
    }
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v19);
    *a2 = (struct CManipulationFrame *)v7;
  }
  else
  {
    v4 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x31u);
  }
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)&v19);
  return v4;
}
