/*
 * XREFs of ?RuntimeClassInitialize@CDeviceGraphObjectsStore@@QEAAJPEBG@Z @ 0x18001BF80
 * Callers:
 *     ??$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@Microsoft@@YAJPEAPEAUIDeviceGraphObjectsStore@@AEAPEBG@Z @ 0x18002AF0C (--$MakeAndInitialize@VCDeviceGraphObjectsStore@@UIDeviceGraphObjectsStore@@AEAPEBG@Details@WRL@M.c)
 * Callees:
 *     ??$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z @ 0x180015514 (--$_AllocStringWorker@VCTCoAllocPolicy@@@@YAJPEAXKPEBG_K2PEAPEAG@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CDeviceGraphObjectsStore::RuntimeClassInitialize(
        CDeviceGraphObjectsStore *this,
        const unsigned __int16 *a2)
{
  unsigned __int16 **v2; // rdi
  void *v3; // rsi
  unsigned __int64 v5; // r9
  int v6; // eax
  unsigned int v7; // ebx
  DWORD LastError; // ebx
  __int64 v10; // [rsp+20h] [rbp-18h]
  int v11; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  v2 = (unsigned __int16 **)((char *)this + 16);
  v3 = (void *)*((_QWORD *)this + 2);
  if ( v3 )
  {
    LastError = GetLastError();
    CoTaskMemFree(v3);
    SetLastError(LastError);
  }
  *v2 = 0LL;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v6 = _AllocStringWorker<CTCoAllocPolicy>((__int64)this, (__int64)a2, a2, v5, v10, v2);
  v7 = v6;
  if ( v6 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x19,
    (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphstore.cpp",
    (const char *)(unsigned int)v6,
    v11);
  return v7;
}
