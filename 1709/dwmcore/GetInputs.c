/*
 * XREFs of GetInputs @ 0x1800BE4F4
 * Callers:
 *     ?GetShaderLinkingBody@CommonRenderingShaderBody@@YA?AUShaderLinkingBody@@W4Enum@1@W4D3DShaderProfileVersion@@@Z @ 0x1800BE460 (-GetShaderLinkingBody@CommonRenderingShaderBody@@YA-AUShaderLinkingBody@@W4Enum@1@W4D3DShaderPro.c)
 * Callees:
 *     _Init_thread_footer @ 0x1800C2F28 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800C2F88 (_Init_thread_header.c)
 */

_QWORD *__fastcall GetInputs(_QWORD *a1, int a2)
{
  int v4; // edi
  int v5; // edi
  void *v6; // rax

  if ( dword_18027282C > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_18027282C);
    if ( dword_18027282C == -1 )
    {
      dword_18026E092 = 33620480;
      word_18026DE06 = 513;
      Init_thread_footer(&dword_18027282C);
    }
  }
  if ( a2 )
  {
    v4 = a2 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( !v5 )
      {
        v6 = &unk_18026DE04;
        a1[1] = 2LL;
        goto LABEL_8;
      }
      if ( v5 != 1 )
      {
        *a1 = 0LL;
        a1[1] = 0LL;
        return a1;
      }
      a1[1] = 3LL;
    }
    else
    {
      a1[1] = 2LL;
    }
  }
  else
  {
    a1[1] = 1LL;
  }
  v6 = &unk_18026E090;
LABEL_8:
  *a1 = v6;
  return a1;
}
