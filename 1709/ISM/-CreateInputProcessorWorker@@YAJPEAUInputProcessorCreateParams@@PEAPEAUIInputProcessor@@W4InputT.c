/*
 * XREFs of ?CreateInputProcessorWorker@@YAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@W4InputType@@H@Z @ 0x180036510
 * Callers:
 *     ?OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z @ 0x180006430 (-OnDeviceAttach@InputStateManager@@UEAAJPEAUDeviceInfo@@PEAUIRawInputProvider@@@Z.c)
 *     ?CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1800365C0 (-CreateChildInputProcessor@@YAJW4InputType@@PEAUInputProcessorCreateParams@@PEAPEAUIInputProcess.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CreateInputProcessorWorker(_QWORD *a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v4; // edi
  __int64 result; // rax
  char *v9; // rbx
  __int64 v10; // rax
  unsigned int (__fastcall *v11)(_QWORD); // rax

  v4 = a4;
  result = 2147943568LL;
  if ( a4 < 0x10 )
  {
    v9 = (char *)&unk_18010D350 + 48 * (int)a4;
    do
    {
      v10 = *((_QWORD *)v9 + 1);
      if ( _bittest64(&v10, gdwDeviceFamily) && (!a3 || a3 == *(_DWORD *)v9) )
      {
        v11 = (unsigned int (__fastcall *)(_QWORD))*((_QWORD *)v9 + 2);
        if ( !v11 || v11(*a1) )
        {
          result = (*((__int64 (__fastcall **)(_QWORD *, __int64))v9 + 3))(a1, a2);
          if ( (int)result >= 0 )
            break;
        }
      }
      ++v4;
      v9 += 48;
      result = 2147943568LL;
    }
    while ( v4 < 0x10 );
  }
  return result;
}
