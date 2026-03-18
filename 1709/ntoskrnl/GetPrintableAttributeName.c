/*
 * XREFs of GetPrintableAttributeName @ 0x1407352E8
 * Callers:
 *     LocalpGetStringForCondition @ 0x140737BE0 (LocalpGetStringForCondition.c)
 * Callees:
 *     memmove @ 0x140192C00 (memmove.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     SddlpAlloc @ 0x14057C7AC (SddlpAlloc.c)
 *     EncodeAttributeName @ 0x1407344B4 (EncodeAttributeName.c)
 */

__int64 __fastcall GetPrintableAttributeName(__int64 a1, int a2, char a3, _QWORD *a4, _DWORD *a5)
{
  unsigned int v6; // ebx
  unsigned int v7; // r14d
  unsigned int v8; // r15d
  PVOID v9; // rbp
  size_t v10; // r13
  unsigned int v11; // eax
  __int64 v12; // r15
  unsigned int v13; // edx
  size_t v14; // rcx
  bool v15; // cf
  unsigned __int64 v16; // r12
  char *v17; // rdi
  const wchar_t *v18; // rdx
  size_t v19; // r8
  const void *v20; // rdx
  PVOID P[9]; // [rsp+20h] [rbp-48h] BYREF

  P[0] = 0LL;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( a1 && a4 && a2 )
  {
    *a5 = 1;
    if ( (unsigned int)(a2 - 1) < 4 )
      return 1336;
    v10 = *(unsigned int *)(a1 + 1);
    *a5 = 5;
    if ( a2 - 5 < (unsigned int)v10 )
    {
      return 1336;
    }
    else
    {
      if ( a3 != -8 )
      {
        v11 = EncodeAttributeName((unsigned __int16 *)(a1 + 5), v10, (__int64 *)P);
        v9 = P[0];
        v6 = v11;
        if ( v11 )
          goto LABEL_49;
        v12 = -1LL;
        do
          ++v12;
        while ( *((_WORD *)P[0] + v12) );
        v8 = 2 * v12;
        v13 = -1;
        if ( v8 + 2 < v8 )
          goto LABEL_13;
        v14 = v8 + 2;
LABEL_17:
        switch ( a3 )
        {
          case -5:
            v7 = 16;
            if ( (int)v14 + 16 >= (unsigned int)v14 )
              v13 = v14 + 16;
            v15 = (int)v14 + 16 < (unsigned int)v14;
            break;
          case -7:
            v7 = 12;
            if ( (int)v14 + 12 >= (unsigned int)v14 )
              v13 = v14 + 12;
            v15 = (int)v14 + 12 < (unsigned int)v14;
            break;
          case -6:
            v7 = 20;
            if ( (int)v14 + 20 >= (unsigned int)v14 )
              v13 = v14 + 20;
            v15 = (int)v14 + 20 < (unsigned int)v14;
            break;
          case -4:
            v7 = 14;
            if ( (int)v14 + 14 >= (unsigned int)v14 )
              v13 = v14 + 14;
            v15 = (int)v14 + 14 < (unsigned int)v14;
            break;
          default:
LABEL_22:
            v16 = (unsigned int)v14;
            v17 = (char *)SddlpAlloc(v14);
            *a4 = v17;
            if ( !v17 )
            {
              v6 = 8;
              goto LABEL_49;
            }
            if ( a3 == -5 )
            {
              v18 = L"@DEVICE.";
            }
            else if ( a3 == -7 )
            {
              v18 = L"@USER.";
            }
            else
            {
              if ( a3 != -6 )
              {
                if ( a3 == -4 )
                  memmove(v17, L"@TOKEN.", v7);
                if ( a3 == -8 )
                {
                  v19 = v10;
                  v20 = (const void *)(a1 + (unsigned int)*a5);
                  goto LABEL_48;
                }
LABEL_46:
                v19 = v8;
                v20 = v9;
LABEL_48:
                memmove(&v17[v7], v20, v19);
                *(_WORD *)&v17[2 * (v16 >> 1) - 2] = 0;
                *a5 += v10;
LABEL_49:
                if ( v9 )
                  ExFreePoolWithTag(v9, 0);
                return v6;
              }
              v18 = L"@RESOURCE.";
            }
            memmove(v17, v18, v7);
            goto LABEL_46;
        }
        v14 = v13;
        if ( !v15 )
          goto LABEL_22;
LABEL_13:
        v6 = 534;
        goto LABEL_49;
      }
      v13 = -1;
      if ( (int)v10 + 2 >= (unsigned int)v10 )
      {
        v14 = (unsigned int)(v10 + 2);
        goto LABEL_17;
      }
      return 534;
    }
  }
  return 87LL;
}
