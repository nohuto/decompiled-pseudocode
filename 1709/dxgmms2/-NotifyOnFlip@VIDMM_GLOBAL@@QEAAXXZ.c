/*
 * XREFs of ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00200F4
 * Callers:
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0027CD0 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     McTemplateK0q @ 0x1C0016F44 (McTemplateK0q.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyOnFlip(VIDMM_GLOBAL *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  REGHANDLE EtwHandle; // rax
  bool v7; // zf
  int v8; // eax

  if ( *((_QWORD *)this + 980) <= (unsigned __int64)qword_1C00402B0 )
  {
    v8 = *((_DWORD *)this + 1962);
    if ( v8 )
      *((_DWORD *)this + 1962) = v8 - 1;
  }
  else
  {
    *((_DWORD *)this + 1962) += dword_1C00402BC;
    if ( *((_DWORD *)this + 1962) > (unsigned int)dword_1C00402B8
      && MEMORY[0xFFFFF78000000014] - *((_QWORD *)this + 982) > (unsigned __int64)qword_1C00402C0 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer, a2, a3) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v7 = bTracingEnabled == 0;
      *((_QWORD *)this + 982) = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)this + 1962) = 0;
      if ( !v7 && ((unsigned __int8)Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        McTemplateK0q(v4, (__int64)&EventPerformanceWarning, v5, 5);
    }
  }
  _InterlockedExchange64((volatile __int64 *)this + 980, 0LL);
}
