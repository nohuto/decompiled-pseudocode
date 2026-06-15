/*
 * XREFs of ?CalculateAPOVolume@CPerStreamVolumeAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x18002B720
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18005D83C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CPerStreamVolumeAudioStream::CalculateAPOVolume(
        CPerStreamVolumeAudioStream *this,
        __int64 a2,
        float *const a3,
        bool *a4,
        __int64 *a5)
{
  __int64 v6; // r11
  float *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  int v14; // [rsp+20h] [rbp-8h]
  int v15; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v6 = (unsigned int)a2;
  if ( (_DWORD)a2 == *((_DWORD *)this + 23) )
  {
    if ( (_DWORD)a2 )
    {
      v7 = a3;
      v8 = *((_QWORD *)this + 14) - (_QWORD)a3;
      a2 = (unsigned int)a2;
      do
      {
        *v7 = *(float *)((char *)v7 + v8) * *((float *)this + 25);
        ++v7;
        --a2;
      }
      while ( a2 );
    }
    v9 = *((_QWORD *)this + 13);
    *a4 = *((_BYTE *)this + 664);
    v10 = *((_QWORD *)this + 82);
    if ( v9 >= v10 )
      v10 = v9;
    *a5 = v10;
    if ( (_DWORD)v6 )
    {
      v11 = v6;
      v12 = *((_QWORD *)this + 81) - (_QWORD)a3;
      do
      {
        *a3 = *(float *const)((char *)a3 + v12) * *a3;
        ++a3;
        --v11;
      }
      while ( v11 );
    }
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x7B8,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL,
      v14);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x8F7,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiostream.cpp",
      (const char *)0x80070057LL,
      v15);
    return 2147942487LL;
  }
}
