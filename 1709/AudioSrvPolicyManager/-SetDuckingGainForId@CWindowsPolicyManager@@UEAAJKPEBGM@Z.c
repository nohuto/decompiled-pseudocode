/*
 * XREFs of ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x180005810
 * Callers:
 *     <none>
 * Callees:
 *     ??$QueueApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUDuckingGainValueChangedContext@@@Z0@Z @ 0x180006668 (--$QueueApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@YAJP8CApplicationManager@@.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180011518 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180027024 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::SetDuckingGainForId(
        CWindowsPolicyManager *this,
        int a2,
        const unsigned __int16 *a3,
        float a4)
{
  HANDLE ProcessHeap; // rax
  float *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  LPVOID *v10; // rdi
  signed int v11; // ebx
  __int64 v12; // r9
  LPVOID *v13; // r14
  LPVOID *v14; // rsi

  ProcessHeap = GetProcessHeap();
  v7 = (float *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v10 = (LPVOID *)v7;
  if ( v7 )
  {
    *(_QWORD *)v7 = 0LL;
    v7[3] = a4;
    *((_DWORD *)v7 + 2) = a2;
  }
  else
  {
    v10 = 0LL;
  }
  v11 = v10 == 0LL ? 0x8007000E : 0;
  if ( v10 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( a3[v12] );
    v11 = _AllocStringWorker<CTCoAllocPolicy>(v9, v8, a3);
  }
  v13 = 0LL;
  v14 = 0LL;
  if ( v11 >= 0 )
    v14 = v10;
  else
    v13 = v10;
  if ( v13 )
  {
    CoTaskMemFree(*v13);
    *v13 = 0LL;
    operator delete(v13, (const struct std::nothrow_t *)0x10);
  }
  if ( v11 < 0 || (v11 = QueueApplicationManagerWorkItem<DuckingGainValueChangedContext>(v9, v14), v11 < 0) )
  {
    if ( v14 )
    {
      CoTaskMemFree(*v14);
      *v14 = 0LL;
      operator delete(v14, (const struct std::nothrow_t *)0x10);
    }
  }
  return (unsigned int)v11;
}
