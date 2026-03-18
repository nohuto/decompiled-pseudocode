/*
 * XREFs of ?_CreateCompositionInputSink@@YAJPEBUCOMPOSITION_INPUT_SINK@@HPEAPEAX@Z @ 0x1C00950CC
 * Callers:
 *     NtCreateCompositionInputSink @ 0x1C0095090 (NtCreateCompositionInputSink.c)
 *     NtCreateImplicitCompositionInputSink @ 0x1C00950B0 (NtCreateImplicitCompositionInputSink.c)
 * Callees:
 *     ?KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEAPEAX@Z @ 0x1C009E6A4 (-KernelCreateCompositionInputSink@CompositionInputObject@@SAJPEBUCOMPOSITION_INPUT_SINK_V2@@HPEA.c)
 *     memset @ 0x1C00ABB80 (memset.c)
 */

__int64 __fastcall _CreateCompositionInputSink(const struct COMPOSITION_INPUT_SINK *a1, int a2, void **a3)
{
  int v6; // edi
  __int64 v7; // rsi
  const struct COMPOSITION_INPUT_SINK *v8; // rax
  char *v9; // rbx
  _OWORD *v10; // rax
  __int64 v11; // rcx
  _OWORD v13[20]; // [rsp+30h] [rbp-148h] BYREF
  void *v14; // [rsp+198h] [rbp+20h] BYREF

  v6 = 0;
  v7 = -1LL;
  v14 = (void *)-1LL;
  memset(v13, 0, 0x120uLL);
  if ( a1 )
  {
    v8 = a1;
    if ( (unsigned __int64)a1 >= MmUserProbeAddress )
      v8 = (const struct COMPOSITION_INPUT_SINK *)MmUserProbeAddress;
    if ( *(_DWORD *)v8 >= 0x120u )
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (const struct COMPOSITION_INPUT_SINK *)MmUserProbeAddress;
      v10 = v13;
      v11 = 2LL;
      do
      {
        *v10 = *(_OWORD *)a1;
        v10[1] = *((_OWORD *)a1 + 1);
        v10[2] = *((_OWORD *)a1 + 2);
        v10[3] = *((_OWORD *)a1 + 3);
        v10[4] = *((_OWORD *)a1 + 4);
        v10[5] = *((_OWORD *)a1 + 5);
        v10[6] = *((_OWORD *)a1 + 6);
        v10 += 8;
        *(v10 - 1) = *((_OWORD *)a1 + 7);
        a1 = (const struct COMPOSITION_INPUT_SINK *)((char *)a1 + 128);
        --v11;
      }
      while ( v11 );
      *v10 = *(_OWORD *)a1;
      v10[1] = *((_OWORD *)a1 + 1);
    }
    else
    {
      if ( (unsigned __int64)a1 >= MmUserProbeAddress )
        a1 = (const struct COMPOSITION_INPUT_SINK *)MmUserProbeAddress;
      v13[0] = *(_OWORD *)a1;
      v13[1] = *((_OWORD *)a1 + 1);
      v13[2] = *((_OWORD *)a1 + 2);
      v13[3] = *((_OWORD *)a1 + 3);
      v13[4] = *((_OWORD *)a1 + 4);
      v13[5] = *((_OWORD *)a1 + 5);
      v13[6] = *((_OWORD *)a1 + 6);
      v13[7] = *((_OWORD *)a1 + 7);
      v9 = (char *)a1 + 128;
      v13[8] = *(_OWORD *)v9;
      v13[9] = *((_OWORD *)v9 + 1);
      v13[10] = *((_OWORD *)v9 + 2);
      v13[11] = *((_OWORD *)v9 + 3);
      v13[12] = *((_OWORD *)v9 + 4);
      v13[13] = *((_OWORD *)v9 + 5);
      *(_QWORD *)&v13[14] = *((_QWORD *)v9 + 12);
      DWORD2(v13[14]) = 0;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 >= 0 )
  {
    v6 = CompositionInputObject::KernelCreateCompositionInputSink(
           (const struct COMPOSITION_INPUT_SINK_V2 *)v13,
           a2,
           &v14);
    v7 = (__int64)v14;
  }
  if ( a3 )
  {
    if ( a3 + 1 < a3 || (unsigned __int64)(a3 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a3 = (void *)v7;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 < 0 && v7 != -1 )
    NtClose((HANDLE)v7);
  return (unsigned int)v6;
}
