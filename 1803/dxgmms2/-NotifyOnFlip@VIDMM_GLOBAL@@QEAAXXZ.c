/*
 * XREFs of ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00226B0
 * Callers:
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C002AB00 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0016834 (McTemplateK0q.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyOnFlip(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  REGHANDLE EtwHandle; // rax
  bool v9; // zf

  v4 = *((_DWORD *)this + 2106);
  if ( *((_QWORD *)this + 1052) <= (unsigned __int64)qword_1C00472B0 )
  {
    if ( v4 )
      *((_DWORD *)this + 2106) = v4 - 1;
  }
  else
  {
    v5 = (unsigned int)(v4 + dword_1C00472BC);
    *((_DWORD *)this + 2106) = v5;
    if ( (unsigned int)v5 > dword_1C00472B8
      && MEMORY[0xFFFFF78000000014] - *((_QWORD *)this + 1054) > (unsigned __int64)qword_1C00472C0 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer, v5, a3) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v9 = bTracingEnabled == 0;
      *((_QWORD *)this + 1054) = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)this + 2106) = 0;
      if ( !v9 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v6, (__int64)&EventPerformanceWarning, v7, 5);
    }
  }
  _InterlockedExchange64((volatile __int64 *)this + 1052, 0LL);
}
