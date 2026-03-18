/*
 * XREFs of ToDecStr @ 0x1C0061560
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C00039C0 (HeapAlloc.c)
 *     ValidateArgTypes @ 0x1C001A400 (ValidateArgTypes.c)
 *     WriteObject @ 0x1C001ADC0 (WriteObject.c)
 *     ValidateTarget @ 0x1C001B7DC (ValidateTarget.c)
 *     PrintDebugMessage @ 0x1C001CF28 (PrintDebugMessage.c)
 *     AcpiDiagTraceAmlError @ 0x1C001D034 (AcpiDiagTraceAmlError.c)
 *     LogError @ 0x1C001D178 (LogError.c)
 *     ConPrintf @ 0x1C002C03C (ConPrintf.c)
 *     memmove @ 0x1C002C840 (memmove.c)
 */

__int64 __fastcall ToDecStr(__int64 a1, __int64 a2)
{
  unsigned int v4; // edi
  __int64 v5; // rdx
  int v6; // ecx
  unsigned int v7; // eax
  __int64 v8; // rdi
  _BYTE *v9; // rcx
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 j; // r10
  unsigned __int8 v16; // dl
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rdx
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  __int64 i; // r9
  char v24; // al
  __int64 v26; // [rsp+48h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, (__int64)"D");
  if ( !v4 )
  {
    v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 0x87u, &v26);
    if ( !v4 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 2;
      v5 = *(_QWORD *)(a2 + 80);
      switch ( *(_WORD *)(v5 + 2) )
      {
        case 1:
          v20 = *(_QWORD *)(v5 + 16);
          LODWORD(v8) = 0;
          do
          {
            v8 = (unsigned int)(v8 + 1);
            v20 /= 0xAuLL;
          }
          while ( v20 );
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v8 + 1;
          ConPrintf("qwDataValue = %I64x, length=%x, size=%x\n", 0LL, v8, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v21 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v21;
          if ( v21 )
          {
            v22 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
            for ( i = (int)v8 - 1; i >= 0; --i )
            {
              v24 = HTOALookupTable[v22 % 0xA];
              v22 /= 0xAuLL;
              *(_BYTE *)(i + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v24;
            }
            goto LABEL_31;
          }
          break;
        case 2:
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(v5 + 24);
          ConPrintf("size=%x\n", *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v19 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v19;
          if ( v19 )
          {
            memmove(
              *(void **)(*(_QWORD *)(a2 + 88) + 32LL),
              *(const void **)(*(_QWORD *)(a2 + 80) + 32LL),
              *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
            return (unsigned int)WriteObject(a1, v26, *(_QWORD *)(a2 + 88));
          }
          break;
        case 3:
          v7 = *(_DWORD *)(v5 + 24);
          v8 = v7 - 1;
          if ( v7 )
          {
            v9 = *(_BYTE **)(v5 + 32);
            v10 = v7;
            do
            {
              if ( *v9 >= 0xAu )
                v11 = 3 - (*v9 < 0x64u);
              else
                v11 = 1;
              ++v9;
              v8 = (unsigned int)(v11 + v8);
              --v10;
            }
            while ( v10 );
          }
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v8 + 1;
          ConPrintf("length=%x,size=%x\n", v8, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v12 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v12;
          if ( v12 )
          {
            v13 = *(_QWORD *)(a2 + 80);
            v14 = 0LL;
            for ( j = 0LL; (unsigned int)v14 < *(_DWORD *)(v13 + 24); v13 = *(_QWORD *)(a2 + 80) )
            {
              v16 = *(_BYTE *)(v14 + *(_QWORD *)(v13 + 32));
              if ( v16 >= 0xAu )
              {
                if ( v16 >= 0x64u )
                {
                  *(_BYTE *)(j + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[(int)(v16 / 0x64u) % 10];
                  j = (unsigned int)(j + 1);
                }
                v17 = v16 % 0xAu;
                *(_BYTE *)(j + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[(int)(v16 / 0xAu) % 10];
                j = (unsigned int)(j + 1);
              }
              else
              {
                v17 = v16;
              }
              v18 = (unsigned int)(j + 1);
              v14 = (unsigned int)(v14 + 1);
              *(_BYTE *)(j + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v17];
              j = (unsigned int)(j + 2);
              *(_BYTE *)(v18 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 44;
            }
LABEL_31:
            *(_BYTE *)(v8 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 0;
            return (unsigned int)WriteObject(a1, v26, *(_QWORD *)(a2 + 88));
          }
          break;
        default:
          v4 = -1072431098;
          LogError(-1072431098);
          AcpiDiagTraceAmlError(a1, -1072431098);
          v6 = 186;
LABEL_28:
          PrintDebugMessage(v6, 0LL, 0LL, 0LL, 0LL);
          return v4;
      }
      v4 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      v6 = 185;
      goto LABEL_28;
    }
  }
  return v4;
}
