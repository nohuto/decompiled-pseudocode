/*
 * XREFs of ?UmfdEscEngMapFontFileFD@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1C0091960
 * Callers:
 *     UmfdDispatchEscape @ 0x1C0091110 (UmfdDispatchEscape.c)
 * Callees:
 *     ??1AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C001EB80 (--1AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     ?vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z @ 0x1C0021448 (-vUnreferenceFileviewSection@@YAXPEAU_FILEVIEW@@@Z.c)
 *     ?vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z @ 0x1C0021490 (-vUnmapFileFD@@YAXPEAU_FILEVIEW@@E@Z.c)
 *     ?MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z @ 0x1C002155C (-MapViewOfSectionToFontDriverProcess@@YAJPEAU_FILEVIEW@@@Z.c)
 *     ?LookUp@?$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@@Z @ 0x1C00275DC (-LookUp@-$CSortedVector@IPEAU_FONTFILEVIEW@@@NSInstrumentation@@QEAA_NAEBIPEAPEAU_FONTFILEVIEW@@.c)
 *     ?bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z @ 0x1C0027D60 (-bCreateSection@@YAHPEAGPEAU_FILEVIEW@@HPEAHE@Z.c)
 *     ?bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z @ 0x1C00F24CC (-bMapRoutine@@YAHPEAU_FONTFILEVIEW@@PEAU_FILEVIEW@@W4_MAP_MODE@@H@Z.c)
 *     ??0AutoSharedUmfdFileViewLock@@QEAA@XZ @ 0x1C013C2D8 (--0AutoSharedUmfdFileViewLock@@QEAA@XZ.c)
 *     memset @ 0x1C0140500 (memset.c)
 */

void __fastcall UmfdEscEngMapFontFileFD(struct tagUMFD_ESCAPE_ARGUMENT *a1)
{
  volatile void **v1; // rbx
  __int64 v2; // rcx
  int v3; // esi
  int v4; // r14d
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  struct _FILEVIEW *v7; // rdi
  char *v8; // r14
  int v9; // edi
  int v10; // eax
  unsigned __int64 v11; // r8
  __int64 v12; // rdx
  int v13; // r14d
  int v14; // eax
  int v15; // [rsp+30h] [rbp-88h] BYREF
  _BYTE v16[8]; // [rsp+38h] [rbp-80h] BYREF
  struct _FILEVIEW *v17; // [rsp+40h] [rbp-78h] BYREF
  char *v18; // [rsp+48h] [rbp-70h]
  _DWORD v19[20]; // [rsp+60h] [rbp-58h] BYREF

  v1 = (volatile void **)((char *)a1 + 8);
  v18 = (char *)a1 + 8;
  AutoSharedUmfdFileViewLock::AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)v16);
  v17 = 0LL;
  if ( !UmfdFileviewLookup )
    goto LABEL_27;
  v15 = *(_DWORD *)v1;
  if ( !NSInstrumentation::CSortedVector<unsigned int,_FONTFILEVIEW *>::LookUp(v2, &v15, &v17) )
    goto LABEL_27;
  memset(v19, 0, sizeof(v19));
  v3 = 1;
  v4 = 1;
  GreAcquireFastMutex(ghfmMemory);
  v7 = v17;
  if ( *((_QWORD *)v17 + 2) )
  {
    v4 = 0;
    ++*((_DWORD *)v17 + 25);
  }
  else
  {
    if ( !*((_QWORD *)v17 + 10) )
    {
      GreReleaseFastMutex(ghfmMemory);
      goto LABEL_27;
    }
    if ( *((_QWORD *)v17 + 4) )
    {
      v14 = MapViewOfSectionToFontDriverProcess(v17, v5, v6);
      if ( v14 < 0 )
        v3 = 0;
      else
        *((_DWORD *)v7 + 25) = 1;
      v4 = 0;
    }
  }
  GreReleaseFastMutex(ghfmMemory);
  if ( v4 )
  {
    v10 = bCreateSection(*((PCWSTR *)v7 + 10), (struct _FILEVIEW *)v19, 0, &v15, (*((_DWORD *)v7 + 10) & 8) != 0);
    v12 = (LOBYTE(v19[10]) ^ (unsigned __int8)*((_DWORD *)v7 + 10)) & 0x20;
    v19[10] ^= v12;
    if ( !v10 )
      goto LABEL_27;
    if ( (int)MapViewOfSectionToFontDriverProcess((struct _FILEVIEW *)v19, v12, v11) < 0 )
    {
      vUnreferenceFileviewSection((struct _FILEVIEW *)v19);
      goto LABEL_27;
    }
    GreAcquireFastMutex(ghfmMemory);
    ++*((_DWORD *)v7 + 25);
    if ( *((_QWORD *)v7 + 2) )
    {
      v13 = 0;
    }
    else
    {
      v13 = bMapRoutine(v7, v19, 1LL, (unsigned int)v15);
      v3 = v13;
    }
    GreReleaseFastMutex(ghfmMemory);
    if ( !v13 )
      vUnmapFileFD((struct _FILEVIEW *)v19, 1);
  }
  if ( v3 )
  {
    v8 = (char *)*((_QWORD *)v7 + 2);
    v9 = *((_DWORD *)v7 + 6);
  }
  else
  {
    v9 = v15;
    v8 = v18;
  }
  if ( v3 )
  {
    AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)v16);
    ProbeForWrite(v1[1], 8uLL, 8u);
    ProbeForWrite(v1[2], 4uLL, 4u);
    *(_QWORD *)v1[1] = v8;
    *(_DWORD *)v1[2] = v9;
    *(_DWORD *)v1 = 1;
    return;
  }
LABEL_27:
  *(_DWORD *)v1 = 0;
  AutoSharedUmfdFileViewLock::~AutoSharedUmfdFileViewLock((AutoSharedUmfdFileViewLock *)v16);
}
