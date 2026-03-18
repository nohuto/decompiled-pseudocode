/*
 * XREFs of ToDecStr @ 0x1C0052F60
 * Callers:
 *     <none>
 * Callees:
 *     HeapAlloc @ 0x1C0003394 (HeapAlloc.c)
 *     memmove @ 0x1C0004200 (memmove.c)
 *     AcpiDiagTraceAmlError @ 0x1C0006B18 (AcpiDiagTraceAmlError.c)
 *     ValidateArgTypes @ 0x1C0047D6C (ValidateArgTypes.c)
 *     ValidateTarget @ 0x1C0048320 (ValidateTarget.c)
 *     ConPrintf @ 0x1C0048620 (ConPrintf.c)
 *     LogError @ 0x1C004905C (LogError.c)
 *     PrintDebugMessage @ 0x1C0049830 (PrintDebugMessage.c)
 *     WriteObject @ 0x1C004E1D0 (WriteObject.c)
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
  unsigned int v14; // r11d
  unsigned int j; // r9d
  __int64 v16; // r15
  __int64 v17; // r14
  __int64 v18; // r9
  unsigned __int8 v19; // bp
  __int64 v20; // r15
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // r8
  __int64 i; // r9
  char v27; // al
  __int64 v29; // [rsp+68h] [rbp+10h] BYREF

  v4 = ValidateArgTypes(a1, *(_QWORD *)(a2 + 80), 0, "D");
  if ( !v4 )
  {
    v4 = ValidateTarget(a1, *(_QWORD *)(a2 + 80) + 40LL, 135, (__int64)&v29);
    if ( !v4 )
    {
      *(_WORD *)(*(_QWORD *)(a2 + 88) + 2LL) = 2;
      v5 = *(_QWORD *)(a2 + 80);
      switch ( *(_WORD *)(v5 + 2) )
      {
        case 1:
          v23 = *(_QWORD *)(v5 + 16);
          LODWORD(v8) = 0;
          do
          {
            v8 = (unsigned int)(v8 + 1);
            v23 /= 0xAuLL;
          }
          while ( v23 );
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v8 + 1;
          ConPrintf("qwDataValue = %I64x, length=%x, size=%x\n", 0LL, v8, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v24 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v24;
          if ( v24 )
          {
            v25 = *(_QWORD *)(*(_QWORD *)(a2 + 80) + 16LL);
            for ( i = (int)v8 - 1; i >= 0; --i )
            {
              v27 = HTOALookupTable[v25 % 0xA];
              v25 /= 0xAuLL;
              *(_BYTE *)(i + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = v27;
            }
            goto LABEL_33;
          }
          break;
        case 2:
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = *(_DWORD *)(v5 + 24);
          ConPrintf("size=%x\n", *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v22 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v22;
          if ( v22 )
          {
            memmove(
              *(void **)(*(_QWORD *)(a2 + 88) + 32LL),
              *(const void **)(*(_QWORD *)(a2 + 80) + 32LL),
              *(unsigned int *)(*(_QWORD *)(a2 + 88) + 24LL));
            return (unsigned int)WriteObject(a1, v29, *(_QWORD *)(a2 + 88));
          }
          break;
        case 3:
          v7 = *(_DWORD *)(v5 + 24);
          LODWORD(v8) = v7 - 1;
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
              v8 = (unsigned int)(v11 + v8);
              ++v9;
              --v10;
            }
            while ( v10 );
          }
          else
          {
            v8 = 0LL;
          }
          *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL) = v8 + 1;
          ConPrintf("length=%x,size=%x\n", v8, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          v12 = HeapAlloc(gpheapGlobal, 1381258056, *(_DWORD *)(*(_QWORD *)(a2 + 88) + 24LL));
          *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL) = v12;
          if ( v12 )
          {
            v13 = *(_QWORD *)(a2 + 80);
            v14 = 0;
            for ( j = 0; v14 < *(_DWORD *)(v13 + 24); v13 = *(_QWORD *)(a2 + 80) )
            {
              v16 = *(_QWORD *)(a2 + 88);
              v17 = j;
              v18 = j + 1;
              v19 = *(_BYTE *)(v14 + *(_QWORD *)(v13 + 32));
              if ( v19 >= 0xAu )
              {
                v20 = *(_QWORD *)(v16 + 32);
                v21 = (int)(v19 / 0xAu) % 10;
                if ( v19 >= 0x64u )
                {
                  *(_BYTE *)(v17 + v20) = HTOALookupTable[(int)(v19 / 0x64u) % 10];
                  *(_BYTE *)(v18 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v21];
                  v18 = (unsigned int)(v18 + 1);
                }
                else
                {
                  *(_BYTE *)(v17 + v20) = HTOALookupTable[v21];
                }
                *(_BYTE *)(v18 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = HTOALookupTable[v19 % 0xAu];
                v18 = (unsigned int)(v18 + 1);
              }
              else
              {
                *(_BYTE *)(v17 + *(_QWORD *)(v16 + 32)) = HTOALookupTable[v19];
              }
              ++v14;
              *(_BYTE *)(v18 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 44;
              j = v18 + 1;
            }
LABEL_33:
            *(_BYTE *)(v8 + *(_QWORD *)(*(_QWORD *)(a2 + 88) + 32LL)) = 0;
            return (unsigned int)WriteObject(a1, v29, *(_QWORD *)(a2 + 88));
          }
          break;
        default:
          v4 = -1072431098;
          LogError(-1072431098);
          AcpiDiagTraceAmlError(a1, -1072431098);
          v6 = 186;
LABEL_30:
          PrintDebugMessage(v6, 0LL, 0LL, 0LL, 0LL);
          return v4;
      }
      v4 = -1073741670;
      LogError(-1073741670);
      AcpiDiagTraceAmlError(a1, -1073741670);
      v6 = 185;
      goto LABEL_30;
    }
  }
  return v4;
}
