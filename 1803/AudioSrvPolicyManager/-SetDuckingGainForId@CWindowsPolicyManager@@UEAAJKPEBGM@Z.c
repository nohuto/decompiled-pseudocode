/*
 * XREFs of ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x180009770
 * Callers:
 *     ?SetUserDuckingPreference@CDuckingManager@@UEAAXKK@Z @ 0x18000C0A0 (-SetUserDuckingPreference@CDuckingManager@@UEAAXKK@Z.c)
 * Callees:
 *     ??$QueueApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUDuckingGainValueChangedContext@@@Z0@Z @ 0x18000A8A4 (--$QueueApplicationManagerWorkItem@UDuckingGainValueChangedContext@@@@YAJP8CApplicationManager@@.c)
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180017D14 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180035504 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall CWindowsPolicyManager::SetDuckingGainForId(
        CWindowsPolicyManager *this,
        int a2,
        const unsigned __int16 *a3,
        float a4)
{
  HANDLE ProcessHeap; // rax
  LPVOID *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  LPVOID *v10; // rbx
  signed int v11; // edi
  __int64 v12; // r9
  LPVOID *v13; // rsi

  ProcessHeap = GetProcessHeap();
  v7 = (LPVOID *)HeapAlloc(ProcessHeap, 0, 0x10uLL);
  v10 = v7;
  if ( v7 )
  {
    *v7 = 0LL;
    *((float *)v7 + 3) = a4;
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
  if ( v11 < 0 )
  {
    v13 = v10;
    v10 = 0LL;
  }
  if ( v13 )
  {
    CoTaskMemFree(*v13);
    *v13 = 0LL;
    operator delete(v13, (const struct std::nothrow_t *)0x10);
  }
  if ( v11 < 0 || (v11 = QueueApplicationManagerWorkItem<DuckingGainValueChangedContext>(v9, v10), v11 < 0) )
  {
    if ( v10 )
    {
      CoTaskMemFree(*v10);
      *v10 = 0LL;
      operator delete(v10, (const struct std::nothrow_t *)0x10);
    }
  }
  return (unsigned int)v11;
}
