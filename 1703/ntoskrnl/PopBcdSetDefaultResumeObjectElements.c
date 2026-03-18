/*
 * XREFs of PopBcdSetDefaultResumeObjectElements @ 0x14058AC08
 * Callers:
 *     PopBcdEstablishResumeObject @ 0x1405899F4 (PopBcdEstablishResumeObject.c)
 *     PopBcdRegenerateResumeObject @ 0x1406D5770 (PopBcdRegenerateResumeObject.c)
 * Callees:
 *     wcsrchr @ 0x14016BD30 (wcsrchr.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 *     PopBcdReadElement @ 0x14058AE94 (PopBcdReadElement.c)
 *     BcdSetElementDataWithFlags @ 0x14058B49C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14058B67C (BcdGetElementDataWithFlags.c)
 *     PopBcdSetupResumeObject @ 0x14058D428 (PopBcdSetupResumeObject.c)
 */

__int64 PopBcdSetDefaultResumeObjectElements(__int64 a1, __int64 a2, ...)
{
  wchar_t *v4; // rsi
  char *PoolWithTag; // r14
  int v6; // ebx
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // eax
  wchar_t *v11; // rbx
  const wchar_t *v12; // r12
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rax
  size_t v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  int v20; // ebx
  __int64 v21; // r8
  int v23; // [rsp+30h] [rbp-40h] BYREF
  int v24; // [rsp+34h] [rbp-3Ch] BYREF
  _BYTE v25[4]; // [rsp+38h] [rbp-38h] BYREF
  int v26; // [rsp+3Ch] [rbp-34h] BYREF
  wchar_t *Str; // [rsp+40h] [rbp-30h] BYREF
  PVOID P; // [rsp+48h] [rbp-28h] BYREF
  int ElementDataWithFlags; // [rsp+50h] [rbp-20h]
  int v30; // [rsp+54h] [rbp-1Ch]
  int v31; // [rsp+58h] [rbp-18h]
  _BYTE v32[16]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+40h] BYREF
  va_list va; // [rsp+B0h] [rbp+40h]
  __int64 v35; // [rsp+B8h] [rbp+48h] BYREF
  va_list va1; // [rsp+B8h] [rbp+48h]
  va_list va2; // [rsp+C0h] [rbp+50h] BYREF

  va_start(va2, a2);
  va_start(va1, a2);
  va_start(va, a2);
  v33 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v35 = va_arg(va2, _QWORD);
  P = 0LL;
  v26 = 0;
  Str = 0LL;
  v24 = 0;
  v4 = 0LL;
  PoolWithTag = 0LL;
  v6 = PopBcdReadElement(a2, 285212673LL, &P, &v26);
  if ( v6 >= 0 )
  {
    v6 = PopBcdReadElement(a2, 301989890LL, &Str, &v24);
    if ( v6 < 0 )
    {
      v4 = Str;
    }
    else
    {
      v24 = 8;
      ElementDataWithFlags = BcdGetElementDataWithFlags(a2, 352321618, v7, (unsigned int)v32, (__int64)&v24);
      v23 = 2;
      v30 = BcdGetElementDataWithFlags(a2, 369098836, v8, (unsigned int)va, (__int64)&v23);
      v23 = 2;
      v10 = BcdGetElementDataWithFlags(a2, 369098822, v9, (unsigned int)v25, (__int64)&v23);
      v4 = Str;
      v31 = v10;
      v11 = wcsrchr(Str, 0x5Cu);
      if ( v11 )
      {
        v12 = L"winresume.efi";
        if ( dword_140344B30 != 2 )
          v12 = L"winresume.exe";
        v13 = -1LL;
        v14 = ((char *)v11 - (char *)v4 + 2) >> 1;
        v15 = -1LL;
        do
          ++v15;
        while ( v12[v15] );
        LODWORD(Str) = 2 * (v14 + v15) + 2;
        PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, (unsigned int)Str, 0x64634250u);
        if ( PoolWithTag )
        {
          v16 = 2LL * (unsigned int)v14;
          memmove(PoolWithTag, v4, v16);
          do
            ++v13;
          while ( v12[v13] );
          memmove(&PoolWithTag[v16], v12, 2 * v13 + 2);
          v6 = BcdSetElementDataWithFlags(a1, 285212673LL, v17, P, v26);
          if ( v6 >= 0 )
          {
            v6 = BcdSetElementDataWithFlags(a1, 301989890LL, v18, PoolWithTag, (_DWORD)Str);
            if ( v6 >= 0 )
            {
              if ( ElementDataWithFlags >= 0 )
                BcdSetElementDataWithFlags(a1, 352321618LL, v19, v32, v24);
              v20 = v23;
              if ( v30 >= 0 )
                BcdSetElementDataWithFlags(a1, 369098836LL, v19, (__int64 *)va, v23);
              if ( v31 >= 0 )
                BcdSetElementDataWithFlags(a1, 369098822LL, v19, v25, v20);
              v6 = PopBcdSetupResumeObject(a1);
              if ( v6 >= 0 )
              {
                BYTE1(v35) = 0;
                LOBYTE(v35) = (_BYTE)KdDebuggerEnabled != 0;
                v6 = BcdSetElementDataWithFlags(a1, 637534214LL, v21, (__int64 *)va1, 2);
                if ( v6 >= 0 )
                  v6 = 0;
              }
            }
          }
        }
        else
        {
          v6 = -1073741670;
        }
      }
      else
      {
        v6 = -1073741788;
      }
    }
  }
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
  if ( PoolWithTag )
    ExFreePoolWithTag(PoolWithTag, 0);
  return (unsigned int)v6;
}
