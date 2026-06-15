/*
 * XREFs of ?SubMixDescriptorFromStreamGroupDescriptor@@YAJPEAUSTREAM_GROUP_DESCRIPTOR@@W4PIPE_TYPE@@PEAUSUBMIX_DESCRIPTOR@@@Z @ 0x140001C88
 * Callers:
 *     ?Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z @ 0x1400022A0 (-Initialize@CStreamGroup@@UEAAJPEAUSTREAM_GROUP_DESCRIPTOR@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x140033E48 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall SubMixDescriptorFromStreamGroupDescriptor(
        struct STREAM_GROUP_DESCRIPTOR *a1,
        enum PIPE_TYPE a2,
        struct SUBMIX_DESCRIPTOR *a3)
{
  __int64 v4; // r9
  int v5; // ecx
  __int64 v6; // rax
  __int64 v7; // rcx
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_DWORD *)a1 + 19) > 5u )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x14,
      (unsigned int)"avcore\\audiocore\\server\\audiodg\\exe\\streamgroup.cpp",
      (const char *)0x80070057LL,
      v9);
    return 2147942487LL;
  }
  else
  {
    v4 = 0LL;
    *(_DWORD *)a3 = *(_DWORD *)a1;
    *((_DWORD *)a3 + 1) = *((_DWORD *)a1 + 2);
    *((_DWORD *)a3 + 2) = 3;
    *((_BYTE *)a3 + 12) = *((_DWORD *)a1 + 8) != 0;
    *((_BYTE *)a3 + 13) = *((_DWORD *)a1 + 1) != 0;
    *((_QWORD *)a3 + 4) = *((_QWORD *)a1 + 3);
    *((_DWORD *)a3 + 4) = *((_DWORD *)a1 + 3);
    *((_QWORD *)a3 + 3) = *((_QWORD *)a1 + 2);
    *((_DWORD *)a3 + 10) = *((_DWORD *)a1 + 9);
    *((_QWORD *)a3 + 6) = *((_QWORD *)a1 + 5);
    *((_QWORD *)a3 + 7) = *((_QWORD *)a1 + 6);
    *((_DWORD *)a3 + 16) = *((_DWORD *)a1 + 14);
    *(_OWORD *)((char *)a3 + 68) = *(_OWORD *)((char *)a1 + 60);
    v5 = *((_DWORD *)a1 + 19);
    *((_DWORD *)a3 + 22) = v5;
    *((_BYTE *)a3 + 84) = *((_DWORD *)a1 + 19) != 0;
    if ( v5 )
    {
      do
      {
        v6 = 2 * (v4 + 5);
        v7 = 2LL * (unsigned int)v4;
        v4 = (unsigned int)(v4 + 1);
        *(_OWORD *)((char *)a3 + 8 * v7 + 92) = *(_OWORD *)((char *)a1 + 8 * v6);
      }
      while ( (unsigned int)v4 < *((_DWORD *)a3 + 22) );
    }
    return 0LL;
  }
}
