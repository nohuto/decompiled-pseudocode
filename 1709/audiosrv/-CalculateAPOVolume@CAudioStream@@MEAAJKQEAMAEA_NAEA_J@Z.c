/*
 * XREFs of ?CalculateAPOVolume@CAudioStream@@MEAAJKQEAMAEA_NAEA_J@Z @ 0x18005A630
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18005F740 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 */

__int64 __fastcall CAudioStream::CalculateAPOVolume(
        CAudioStream *this,
        unsigned int a2,
        float *const a3,
        bool *a4,
        __int64 *a5)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v9; // r9
  __int64 v10; // rcx

  v5 = a2;
  v6 = 0;
  if ( (_DWORD)v5 == *((_DWORD *)this + 21) )
  {
    if ( (_DWORD)v5 )
    {
      v9 = v5;
      v10 = *((_QWORD *)this + 14) - (_QWORD)a3;
      do
      {
        *a3 = *(float *const)((char *)a3 + v10) * *((float *)this + 23);
        ++a3;
        --v9;
      }
      while ( v9 );
    }
    *a4 = *((_BYTE *)this + 96);
    *a5 = *((_QWORD *)this + 13);
  }
  else
  {
    v6 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioStream::CalculateAPOVolume", 0x778u, -2147024809);
  }
  return v6;
}
