/*
 * XREFs of ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x180016280
 * Callers:
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x1800122C4 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::SubjectToStreamClassPolicyGains(CProcess *this)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  if ( *((_DWORD *)this + 130) )
  {
    if ( *((_DWORD *)this + 127) )
      v2 = *((_DWORD *)this + 128);
    else
      v2 = *((_DWORD *)this + 88);
    if ( v2 )
      return 1LL;
  }
  return result;
}
