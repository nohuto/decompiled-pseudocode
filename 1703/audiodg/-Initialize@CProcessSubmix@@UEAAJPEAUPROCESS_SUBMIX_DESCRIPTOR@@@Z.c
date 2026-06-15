/*
 * XREFs of ?Initialize@CProcessSubmix@@UEAAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@@Z @ 0x140002580
 * Callers:
 *     <none>
 * Callees:
 *     ?SubMixDescriptorFromProcessSubmixDescriptor@@YAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@W4PIPE_TYPE@@PEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140001BFC (-SubMixDescriptorFromProcessSubmixDescriptor@@YAJPEAUPROCESS_SUBMIX_DESCRIPTOR@@W4PIPE_TYPE@@PEA.c)
 *     ?Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140007C50 (-Initialize@CSubmixImpl@@UEAAJPEAUSUBMIX_DESCRIPTOR@@@Z.c)
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     memset @ 0x14001DC2C (memset.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033EC4 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CProcessSubmix::Initialize(CProcessSubmix *this, struct PROCESS_SUBMIX_DESCRIPTOR *a2)
{
  enum PIPE_TYPE v4; // edx
  int v5; // ebx
  __int64 v7; // rdx
  int v8[44]; // [rsp+20h] [rbp-C8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  memset(v8, 0, sizeof(v8));
  v5 = SubMixDescriptorFromProcessSubmixDescriptor(a2, v4, (struct SUBMIX_DESCRIPTOR *)v8);
  if ( v5 < 0 )
  {
    v7 = 52LL;
  }
  else
  {
    v5 = CSubmixImpl::Initialize((CProcessSubmix *)((char *)this + 16), (struct SUBMIX_DESCRIPTOR *)v8);
    if ( v5 >= 0 )
      return 0LL;
    v7 = 55LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v7,
    (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\processsubmix.cpp",
    (const char *)(unsigned int)v5,
    v8[0]);
  return (unsigned int)v5;
}
