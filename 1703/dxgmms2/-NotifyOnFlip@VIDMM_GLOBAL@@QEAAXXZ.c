/*
 * XREFs of ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C0002928
 * Callers:
 *     VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0025C30 (VidSchiExecuteMmIoFlipAtPassiveLevel.c)
 * Callees:
 *     Template_q @ 0x1C0014A58 (Template_q.c)
 */

void __fastcall VIDMM_GLOBAL::NotifyOnFlip(VIDMM_GLOBAL *this)
{
  int v2; // eax
  __int64 v3; // rcx
  bool v4; // zf
  REGHANDLE EtwHandle; // rax

  if ( *((_QWORD *)this + 980) > (unsigned __int64)qword_1C003C278 )
  {
    *((_DWORD *)this + 1962) += dword_1C003C284;
    if ( *((_DWORD *)this + 1962) > (unsigned int)dword_1C003C280
      && MEMORY[0xFFFFF78000000014] - *((_QWORD *)this + 982) > (unsigned __int64)qword_1C003C288 )
    {
      if ( (unsigned __int8)WdDiagIsTracingEnabled(&Dxgk_ExcessiveMemoryTransfer) )
      {
        EtwHandle = WdDiagGetEtwHandle();
        if ( EtwHandle )
          EtwWrite(EtwHandle, &Dxgk_ExcessiveMemoryTransfer, 0LL, 0, 0LL);
      }
      v4 = bTracingEnabled == 0;
      *((_QWORD *)this + 982) = MEMORY[0xFFFFF78000000014];
      *((_DWORD *)this + 1962) = 0;
      if ( !v4 && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
        Template_q(v3, &EventPerformanceWarning);
    }
  }
  else
  {
    v2 = *((_DWORD *)this + 1962);
    if ( v2 )
      *((_DWORD *)this + 1962) = v2 - 1;
  }
  _InterlockedExchange64((volatile __int64 *)this + 980, 0LL);
}
