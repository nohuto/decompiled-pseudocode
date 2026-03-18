/*
 * XREFs of CreateSetupNameArray @ 0x1C0125AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 CreateSetupNameArray()
{
  __int64 result; // rax
  unsigned int v1; // ebx
  int ProfileValue; // eax
  __int64 v3; // rdx
  __int64 v4; // r8
  unsigned __int16 *v5; // rdi
  signed int v6; // ebx
  int v7; // edx
  int v8; // ecx
  unsigned __int16 *v9; // r8
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // edx
  __int64 v14; // r9
  WCHAR *v15; // r8
  __int64 v16; // rcx

  result = FastGetProfileValue(0LL, 34LL, L"SetupProgramNames", 0LL, 0LL, 0, 0);
  v1 = result;
  if ( (_DWORD)result )
  {
    result = Win32AllocPool((unsigned int)result, 2020897621LL);
    glpSetupPrograms = (unsigned __int16 *)result;
    if ( result )
    {
      ProfileValue = FastGetProfileValue(0LL, 34LL, L"SetupProgramNames", 0LL, result, v1, 0);
      if ( !ProfileValue || ProfileValue != v1 )
      {
        result = Win32FreePool(glpSetupPrograms, v3, v4);
        goto LABEL_25;
      }
      v5 = glpSetupPrograms;
      v6 = v1 >> 1;
      v7 = 0;
      v8 = 0;
      if ( v6 )
      {
        do
        {
          v9 = &glpSetupPrograms[v8];
          if ( *v9 )
          {
            ++v7;
            v10 = -1LL;
            do
              ++v10;
            while ( v9[v10] );
            v8 += v10;
          }
          ++v8;
        }
        while ( v8 < v6 );
      }
      giSetupExe = v7;
      result = Win32AllocPool(16LL * v7, 2020897621LL);
      gpastrSetupExe = (struct _UNICODE_STRING *)result;
      if ( !result )
      {
        result = Win32FreePool(glpSetupPrograms, v11, v12);
        giSetupExe = 0;
LABEL_25:
        glpSetupPrograms = 0LL;
        return result;
      }
      v13 = 0;
      if ( v6 )
      {
        v14 = 0LL;
        do
        {
          result = v13;
          v15 = &v5[v13];
          if ( *v15 )
          {
            v16 = -1LL;
            gpastrSetupExe[v14].Buffer = v15;
            do
              ++v16;
            while ( v15[v16] );
            gpastrSetupExe[v14].Length = 2 * v16;
            gpastrSetupExe[v14].MaximumLength = gpastrSetupExe[v14].Length + 2;
            ++v14;
            result = -1LL;
            do
              ++result;
            while ( v15[result] );
            v13 += result;
          }
          ++v13;
        }
        while ( v13 < v6 );
      }
    }
  }
  return result;
}
