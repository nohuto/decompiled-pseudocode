/*
 * XREFs of ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x1C0268990
 * Callers:
 *     EngLoadModule @ 0x1C0269470 (EngLoadModule.c)
 *     EngLoadModuleForWrite @ 0x1C0269490 (EngLoadModuleForWrite.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0039D0C (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     PALLOCMEM2 @ 0x1C00B22B0 (PALLOCMEM2.c)
 *     ?GetModuleHandleAndIncrementRefcount@@YAPEAXPEAG@Z @ 0x1C02688E0 (-GetModuleHandleAndIncrementRefcount@@YAPEAXPEAG@Z.c)
 *     bMapFile @ 0x1C0269910 (bMapFile.c)
 *     MakeSystemRelativePath @ 0x1C02B1F84 (MakeSystemRelativePath.c)
 */

__int64 __fastcall LoadModuleWorkHorse(char *Source, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 result; // rax
  __int64 v8; // r15
  char *v9; // rax
  HSEMAPHORE v10; // rdx
  char *v11; // rbx
  char *v12; // rsi
  __int64 v13; // rdx
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rcx
  signed __int64 v16; // rdx
  __int16 v17; // ax
  char *v18; // rax
  struct _LIST_ENTRY *Blink; // rcx
  struct _UNICODE_STRING Destination; // [rsp+20h] [rbp-38h] BYREF

  v3 = -1LL;
  v4 = 0LL;
  result = -1LL;
  do
    ++result;
  while ( *(_WORD *)&Source[2 * result] );
  if ( result )
  {
    if ( a2 || (result = (__int64)GetModuleHandleAndIncrementRefcount((wchar_t *)Source), (v4 = result) == 0) )
    {
      while ( *(_WORD *)&Source[2 * v3++ + 2] != 0 )
        ;
      v8 = (2 * (_DWORD)v3 + 9) & 0xFFFFFFF8;
      if ( (unsigned int)MakeSystemRelativePath((PCWSTR)Source, &Destination) )
      {
        v9 = (char *)PALLOCMEM2((unsigned int)(v8 + 104), 1818846791LL, 1);
        v11 = v9;
        if ( v9 )
        {
          v12 = &v9[v8];
          if ( (unsigned int)bMapFile(Destination.Buffer, &v9[v8 + 24], a2, 0LL) )
          {
            v4 = (__int64)(v12 + 24);
            if ( a2 )
            {
              v14 = (unsigned __int64)(unsigned int)v8 >> 1;
              if ( v14 )
              {
                v15 = 2147483646 - v14;
                v16 = (char *)&word_1C02D9FB8 - v11;
                do
                {
                  if ( !(v15 + v14) )
                    break;
                  v17 = *(_WORD *)&v11[v16];
                  if ( !v17 )
                    break;
                  *(_WORD *)v11 = v17;
                  v11 += 2;
                  --v14;
                }
                while ( v14 );
                v18 = v11 - 2;
                if ( v14 )
                  v18 = v11;
                *(_WORD *)v18 = 0;
              }
            }
            else
            {
              StringCchCopyW(v11, (unsigned __int64)(unsigned int)v8 >> 1, Source);
            }
            *((_DWORD *)v12 + 4) = 1;
            *((_DWORD *)v12 + 5) = v8 + 24;
            if ( GreEngLoadModuleAllocListLock )
              GreAcquireSemaphore(GreEngLoadModuleAllocListLock);
            Blink = GreEngLoadModuleAllocList.Blink;
            if ( Blink->Flink != GreEngLoadModuleAllocList.Flink )
              __fastfail(3u);
            *(_QWORD *)v12 = GreEngLoadModuleAllocList.Flink;
            *((_QWORD *)v12 + 1) = Blink;
            Blink->Flink = (struct _LIST_ENTRY *)v12;
            GreEngLoadModuleAllocList.Blink = (struct _LIST_ENTRY *)v12;
            v10 = GreEngLoadModuleAllocListLock;
            if ( GreEngLoadModuleAllocListLock )
            {
              EtwTraceGreLockReleaseSemaphore(L"GreEngLoadModuleAllocListLock", GreEngLoadModuleAllocListLock);
              GreReleaseSemaphoreInternal(GreEngLoadModuleAllocListLock);
            }
          }
          else
          {
            Win32FreePool(v11, v13);
          }
        }
        Win32FreePool(Destination.Buffer, v10);
      }
      return v4;
    }
  }
  return result;
}
