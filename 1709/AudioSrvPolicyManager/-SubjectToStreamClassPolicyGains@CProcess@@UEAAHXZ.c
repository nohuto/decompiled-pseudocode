/*
 * XREFs of ?SubjectToStreamClassPolicyGains@CProcess@@UEAAHXZ @ 0x180010880
 * Callers:
 *     ?HasDuckedStream@CApplication@@QEAAHXZ @ 0x18000D344 (-HasDuckedStream@CApplication@@QEAAHXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CProcess::SubjectToStreamClassPolicyGains(CProcess *this)
{
  __int64 result; // rax
  int v2; // edx

  result = 0LL;
  if ( *((_DWORD *)this + 128) )
  {
    if ( *((_DWORD *)this + 125) )
      v2 = *((_DWORD *)this + 126);
    else
      v2 = *((_DWORD *)this + 86);
    if ( v2 )
      return 1LL;
  }
  return result;
}
